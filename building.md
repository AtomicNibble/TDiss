# 3rdParty

Make sure you have the submodules.

`git submodule init`  
`git submodule sync`  

## Build

`cd 3rdparty`

### Windows

`build.bat`

### Unix

`./build.sh`

# Building

## Windows

`premake5 vs2022`

Note: Older version of visual studio should be supported eg (vs2017, vs2019)

Open `TDiss.sln` or use `msbuild`.

## Unix

`premake5 gmake2`

Build various configs:

Static lib (x86)  
`make config=debug_x86`  
`make config=release_x86`  
`make config=ship_x86`  

Shared lib (x86)  
`make config=debug_x86dll`  
`make config=release_x86dll`  
`make config=ship_x86dll`  

Static lib (x64)  
`make config=debug_x64`  
`make config=release_x64`  
`make config=ship_x64`  

Shared lib (x64)  
`make config=debug_x64dll`  
`make config=release_x64dll`  
`make config=ship_x64dll`  

To build with multiple cores pass `-j8` at the end (replacing 8 with the number of desired build threads).  
For example: `make config=release_x64dll -j8`  
