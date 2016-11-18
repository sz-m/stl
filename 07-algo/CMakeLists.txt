add_executable(07-algo-ex1
  algo-ex1.cpp
)

add_custom_target(run-07-algo-ex1
  DEPENDS 07-algo-ex1
  COMMAND ./07-algo-ex1
)