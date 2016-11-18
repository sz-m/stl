add_executable(06-functors-ex1
  functors-ex1.cpp
)

add_custom_target(run-06-functors-ex1
  DEPENDS 06-functors-ex1
  COMMAND ./06-functors-ex1
)
