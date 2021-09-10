-- premake5.lua
workspace "boost"
configurations {"Debug", "Release"}
group"bIMG"
project "consoleApp"
    kind "ConsoleApp"
    language "C++"
    cppdialect "c++14"
    targetdir "bin/%{cfg.buildcfg}"
    includedirs {"/home/alpha/Documents/projects/temp/BOOST/","./include/"}
    buildoptions {"-Wall"}
    files { "src/temp.cpp"}
    filter "configurations:Debug"
        defines {"ADD_FS_PATH_SUPPORT"}
        links{"png"}
        symbols "On"
        filter "configurations:Release"
        optimize "On"
    
project "test"
    
    kind "ConsoleApp"
    language "C++"
    cppdialect "c++14"
    targetdir "test/bin"
    objdir "test/obj"
    includedirs {"/home/alpha/Documents/BOOST/boost_1_77_0/","./include/"}
    files {"test/*.cpp"}
    filter{}
    
    
    
    