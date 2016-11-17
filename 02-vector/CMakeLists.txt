add_executable(02-vector-ex1
  vector-ex1.cpp
)

add_custom_target(run-02-vector-ex1
  DEPENDS 02-vector-ex1
  COMMAND ./02-vector-ex1
)

add_executable(02-vector-ex2
  vector-ex2.cpp
)

add_custom_target(run-02-vector-ex2
  DEPENDS 02-vector-ex2
  COMMAND ./02-vector-ex2
)
