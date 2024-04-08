
workspace "TDiss"
    configurations { "Debug", "Release", "Ship" }
    platforms {  "Win32", "Win64", "Win32DLL", "Win64DLL" }

    language "C++"

    filter { "platforms:Win32*" }
        architecture "x86"

    filter { "platforms:Win64*" }
        architecture "x86_64"

    filter { "configurations:Debug" }
        symbols "FastLink"
        optimize "Off"
        defines {
            "X_DEBUG=1",
            "X_RELEASE=0",
            "X_SHIP=0",
            "X_ASSERT_DISABLE=0",
            "X_ENABLE_SAFE_STATIC_CAST=1",
        }

    filter { "configurations:Release" }
        symbols "On"
        optimize "Speed"
        flags {
        --    "LinkTimeOptimization",
            "FatalLinkWarnings",
        }
        defines {
            "X_DEBUG=0",
            "X_RELEASE=1",
            "X_SHIP=0",
            "X_ASSERT_DISABLE=0",
            "X_ENABLE_SAFE_STATIC_CAST=1",
            "NDEBUG",
        }

    filter { "configurations:Ship" }
        symbols "On"
        optimize "Speed"
        flags {
            "LinkTimeOptimization", -- This is setting /LTCG:incremental
            -- "NoIncrementalLink", -- this has no effect
            "FatalLinkWarnings",
        }
        defines {
            "X_DEBUG=0",
            "X_RELEASE=0",
            "X_SHIP=1",
            "X_ASSERT_DISABLE=1",
            "X_ENABLE_SAFE_STATIC_CAST=0",
            "TDISS_DISABLE_LOGGING=1",
            "NDEBUG",
        }

    filter "system:Windows"
        cppdialect "c++17"
    --    systemversion "latest"
        linkoptions {
            "/ignore:4221",
        }
        buildoptions { "/Zc:strictStrings", "/Zc:rvalueCast", "/Zc:__cplusplus", "/std:c++17" }
        defines {
            "X_WIN32=1",
        }

    filter "system:linux"
        cppdialect "gnu++17"
        disablewarnings { "unused-variable" }
        defines {
            "X_WIN32=0",
        }

    filter { }

    flags {
        -- "FatalLinkWarnings", -- need to disable this for the malloc overrides shiz.
        "FatalCompileWarnings",
        "MultiProcessorCompile",
    }

    defines {
        -- stb lib shiz
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING",
        "_SCL_SECURE_NO_WARNINGS",
        "_HAS_EXCEPTIONS=1",
        "_ENABLE_EXTENDED_ALIGNED_STORAGE",
    }

    warnings "Extra"

    libdirs {
        "3rdparty/lib/%{cfg.architecture}/%{cfg.buildcfg}",
    }

    -- The path is relative to *this* folder
    targetdir ("build/%{cfg.shortname}")
    objdir ("temp/obj/%{cfg.shortname}")

    editandcontinue "Off"
    exceptionhandling "On"
    rtti "On"


project "TDiss"
    location "temp/projects"
    pic "On"

    filter { "platforms:not *DLL" }
        kind "StaticLib"
        defines { "TDISS_STATIC" }

    filter { "platforms:*DLL" }
        kind "SharedLib"
        defines { "DLL_EXPORTS" }

    filter {}

    files {
        "TDiss/**.cpp",
        "TDiss/**.c",
        "TDiss/**.h",
        "TDiss/**.hpp",
    }

    vpaths {
        ["Headers/*"] = { "TDiss/**.h", "TDiss/**.hpp" },
        ["Sources/*"] = {"TDiss/**.c", "TDiss/**.cpp"},
        ["Docs"] = "**.md"
    }

    filter {}
        links { "CommonLib" }

    includedirs {
        "CommonLib",
    }

    pchheader "TDiss/pch.h"
    pchsource "TDiss/pch.cpp"

    filter { "system:Windows" }
        pchheader "pch.h"

    dependson { "TDissInstTableBuilder" }

    -- Generate the tables
    -- prebuildcommands { "%{prj.location}/%{cfg.targetdir}/TDissInstTableBuilder.exe --out  \"%{prj.location}\"" }


project "TDissInstTableBuilder"
    location "temp/projects"
    kind "ConsoleApp"
    pic "On"

    filter {}

    files {
        "TDissInstTableBuilder/**.cpp",
        "TDissInstTableBuilder/**.c",
        "TDissInstTableBuilder/**.h",
        "TDissInstTableBuilder/**.hpp",
        "TDiss/mnemonics_reg.cpp",
    }

    vpaths {
        ["Headers/*"] = { "TDissInstTableBuilder/**.h", "TDissInstTableBuilder/**.hpp" },
        ["Sources/*"] = { "TDissInstTableBuilder/**.c", "TDissInstTableBuilder/**.cpp", "TDiss/**.cpp"},
        ["Docs"] = "**.md"
    }

    filter {}
        links { "CommonLib" }

    includedirs {
        "3rdparty/source/CLI11",
        "CommonLib",
    }

    pchheader "TDissInstTableBuilder/pch.h"
    pchsource "TDissInstTableBuilder/pch.cpp"

    filter { "system:Windows" }
        pchheader "pch.h"

project "TDissUnitTester"
    location "temp/projects"
    kind "ConsoleApp"
    pic "On"

    filter { "platforms:not *DLL" }
        defines { "TDISS_STATIC" }

    filter {}

    files {
        "TDissUnitTester/**.cpp",
        "TDissUnitTester/**.c",
        "TDissUnitTester/**.h",
        "TDissUnitTester/**.hpp",
    }

    vpaths {
        ["Headers/*"] = { "TDissUnitTester/**.h", "TDissUnitTester/**.hpp" },
        ["Sources/*"] = { "TDissUnitTester/**.c", "TDissUnitTester/**.cpp"},
        ["Docs"] = "**.md"
    }

    filter {}
        links { "gtest" }
        links { "TDiss" }
        links { "CommonLib" }

    includedirs {
        "3rdparty/source/gtest/googletest/include",
        "TDiss",
        "CommonLib",
    }

    pchheader "TDissUnitTester/pch.h"
    pchsource "TDissUnitTester/pch.cpp"

    filter { "system:Windows" }
        pchheader "pch.h"

    dependson { "TDissInstTableBuilder" }

    -- Generate the tables
    -- prebuildcommands { "%{prj.location}/%{cfg.targetdir}/TDissInstTableBuilder.exe --tests --out \"%{prj.location}\"" }


project "TDissBench"
    location "temp/projects"
    kind "ConsoleApp"
    pic "On"

    defines { "BENCHMARK_STATIC_DEFINE" }

    filter { "platforms:not *DLL" }
        defines { "TDISS_STATIC" }

    filter {}

    files {
        "TDissBench/**.cpp",
        "TDissBench/**.c",
        "TDissBench/**.h",
        "TDissBench/**.hpp",
    }

    vpaths {
        ["Headers/*"] = { "TDissBench/**.h", "TDissBench/**.hpp" },
        ["Sources/*"] = { "TDissBench/**.c", "TDissBench/**.cpp"},
        ["Docs"] = "**.md"
    }


    links {
        "Shlwapi",
        "benchmark",
        "TDiss",
        "CommonLib",
    }

    includedirs {
        "3rdparty/source/googlebench/include",
        "TDiss",
        "CommonLib",
    }

    pchheader "TDissBench/pch.h"
    pchsource "TDissBench/pch.cpp"

    filter { "system:Windows" }
        pchheader "pch.h"


project "CommonLib"
    location "temp/projects"
    kind "StaticLib"
    pic "On"

    filter {}

    files {
        "**.natvis",
        "CommonLib/**.cpp",
        "CommonLib/**.h",
        "CommonLib/**.inl",
    }

    vpaths {
        ["Headers/*"] = { "CommonLib/**.h", "CommonLib/**.inl", "CommonLib/**.hpp" },
        ["Sources/*"] = { "CommonLib/**.c", "CommonLib/**.cpp" },
        ["Docs"] = "**.md"
    }

    includedirs {
        "CommonLib"
    }

    filter {}

    pchheader "CommonLib/Common.h"
    pchsource "CommonLib/Common.cpp"

    filter { "system:Windows" }
        pchheader "Common.h"