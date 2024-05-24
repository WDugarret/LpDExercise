# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\LpDExercise_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LpDExercise_autogen.dir\\ParseCache.txt"
  "LpDExercise_autogen"
  )
endif()
