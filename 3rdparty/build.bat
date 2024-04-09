

premake5 vs2022
msbuild /m thirdparty.sln /t:build /p:Configuration=Debug;Platform=Win32
msbuild /m thirdparty.sln /t:build /p:Configuration=Release;Platform=Win32
msbuild /m thirdparty.sln /t:build /p:Configuration=Ship;Platform=Win32

msbuild /m thirdparty.sln /t:build /p:Configuration=Debug;Platform=x64
msbuild /m thirdparty.sln /t:build /p:Configuration=Release;Platform=x64
msbuild /m thirdparty.sln /t:build /p:Configuration=Ship;Platform=x64

