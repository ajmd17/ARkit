cmake_minimum_required(VERSION 3.5)

file (GLOB_RECURSE arkit_SOURCES "arkit/*.cpp")
file (GLOB_RECURSE arkit_HEADERS "../include/arkit/*.hpp")

foreach(f IN LISTS arkit_SOURCES)
  get_filename_component(b ${f} NAME)
  set_source_files_properties(${f} PROPERTIES
    COMPILE_DEFINITIONS "__FILENAME__=${b}")
endforeach()
foreach(f IN LISTS arkit_HEADERS)
  get_filename_component(b ${f} NAME)
  set_source_files_properties(${f} PROPERTIES
    COMPILE_DEFINITIONS "__FILENAME__=${b}")
endforeach()

add_library(arkit SHARED "../android/Android/app/src/main/jni/arkit.c" ${arkit_SOURCES} ${arkit_HEADERS})
target_link_libraries(arkit log)