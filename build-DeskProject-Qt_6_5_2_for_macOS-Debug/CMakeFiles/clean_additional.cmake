# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/DeskProject_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DeskProject_autogen.dir/ParseCache.txt"
  "DeskProject_autogen"
  )
endif()
