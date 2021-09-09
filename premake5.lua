-- premake5.lua
workspace "boost"
configurations {"Debug", "Release"}
group"bIMG"
project "consoleApp"
    kind "ConsoleApp"
    language "C++"
    cppdialect "c++14"
    targetdir "bin/%{cfg.buildcfg}"
    includedirs {"/home/alpha/Documents/BOOST/boost_1_77_0/","./include/"}
    -- kind "ConsoleApp"
    buildoptions {"-Wall"}
    files { "src/**.cpp"}
    
    
    filter "configurations:Debug"
    defines {"DEBUG"}
    links{"png"}
    -- libdirs {"../../../BOOST/boost_1_77_0/stage/lib/"}
    -- links {"boost_regex"}
    symbols "On"
    
    filter "configurations:Release"
    defines {"NDEBUG"}
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
    
    
    
    