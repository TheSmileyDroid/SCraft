workspace "NovaCraft"
  configurations {"Debug", "Release"}
  platforms {"x64"}
  location "build"

project "NovaCraft"
  kind "WindowedApp"
  targetdir "bin/%{cfg.buildcfg}"
  language "C++"
  cppdialect "C++20"
  files {"include/**.h", "src/**.cpp"}
  includedirs { "/usr/include/"}
  libdirs { "/usr/lib/" }

    links { "glfw", "OpenGL" }
    
    filter "system:windows"
      defines { "GLFW_INCLUDE_NONE" }
    
    filter "system:linux"
      links { "dl", "pthread" }
    
    filter "system:macosx"
      links { "CoreFoundation.framework", "IOKit.framework", "Cocoa.framework" }
  filter "configurations:Debug"
    defines { "DEBUG" }
    symbols "On"

  filter "configurations:Release"
    defines { "NDEBUG" }
    optimize "On"
    


