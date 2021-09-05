-- premake5.lua
workspace "boost"
configurations {"Debug", "Release"}

project "output"
    kind "ConsoleApp"
    language "C++"
    targetdir "bin/%{cfg.buildcfg}"
    includedirs {"/home/alpha/Documents/BOOST/boost_1_77_0/","./include/"}
    kind "ConsoleApp"
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
