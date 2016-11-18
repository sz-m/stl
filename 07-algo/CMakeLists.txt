add_executable(07-algo-ex1
  algo-ex1.cpp)

add_custom_target(run-07-algo-ex1
  DEPENDS 07-algo-ex1
  COMMAND ./07-algo-ex1
)

add_executable(07-algo-ex2
  algo-ex2.cpp
)

add_custom_target(run-07-algo-ex2
  DEPENDS 07-algo-ex2
  COMMAND ./07-algo-ex2
)
