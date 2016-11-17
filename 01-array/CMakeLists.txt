add_executable(01-array
  array.cpp
)

add_custom_target(run-01-array
  DEPENDS 01-array
  COMMAND ./01-array
)
