# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/steganografia_projekt_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/steganografia_projekt_autogen.dir/ParseCache.txt"
  "steganografia_projekt_autogen"
  )
endif()
