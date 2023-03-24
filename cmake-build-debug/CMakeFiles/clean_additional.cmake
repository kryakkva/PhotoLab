# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/PhotoLab_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/PhotoLab_autogen.dir/ParseCache.txt"
  "PhotoLab_autogen"
  )
endif()
