workspace "thirdparty"
    configurations { "Debug", "Release", "Ship" }
    platforms {  "x86", "x64" }

    language "C++"

    filter "system:Unix"
        system "linux"

    filter { "platforms:x86*" }
        architecture "x86"

    filter { "platforms:x64*" }
        architecture "x86_64"

    debugformat "c7"
    symbols "on"

    filter { "configurations:Debug*" }
        functionlevellinking "Off"
        symbols "On"
        optimize "Off"
        defines {
            "_DEBUG=1",
        }

    filter { "configurations:Release*" }
        functionlevellinking "On"
        optimize "Speed"
        flags {
            "FatalLinkWarnings",
        }
        defines {
            "NDEBUG=1",
        }

    filter { "configurations:Ship*" }
        functionlevellinking "On"
        optimize "Speed"
        flags {
            "FatalLinkWarnings",
        }
        defines {
            "NDEBUG=1",
        }

    filter {}
        flags {
            "FatalLinkWarnings",
            "MultiProcessorCompile",
        }

        defines {
            "_CRT_SECURE_NO_WARNINGS",
        }

    -- The path is relative to *this* folder
    targetdir ("lib/%{cfg.architecture}/%{cfg.buildcfg}")
    objdir ("../temp/obj/3rdparty/%{cfg.shortname}")

    editandcontinue "Off"
    staticruntime "off"

project "gtest"
    location "../temp/projects/3rdparty/gtest"
    kind "StaticLib"

    files {
        "source/gtest/googletest/src/**.cc",
        "source/gtest/googletest/src/**.h",
    }

    excludes { "source/gtest/googletest/src/gtest-all.cc" }

    vpaths {
        ["Headers/*"] = { "source/gtest/googletest/src/**.h" },
        ["Sources/*"] = { "source/gtest/googletest/src/**.cc" },
    }

    includedirs {
        "source/gtest/googletest/include",
        "source/gtest/googletest",
    }

project "benchmark"
    location "../temp/projects/3rdparty/benchmark"
    kind "StaticLib"

    files {
        "source/googlebench/src/**.cc",
        "source/googlebench/src/**.h",
    }

    vpaths {
        ["Headers/*"] = { "source/googlebench/src/**.h" },
        ["Sources/*"] = { "source/googlebench/src/**.cc" },
    }

    includedirs {
        "source/googlebench_export",
        "source/googlebench/include",
    }

    defines {
        "HAVE_STD_REGEX",
        "HAVE_STEADY_CLOCK",
        "BENCHMARK_STATIC_DEFINE",
    }

    warnings "Extra"

    filter "system:Windows"
        defines {
            "_WINDOWS",
        }