add_executable(05-set-ex1
  set-ex1.cpp
)

add_custom_target(run-05-set-ex1
  DEPENDS 05-set-ex1
  COMMAND ./05-set-ex1
)

add_executable(05-set-ex2
  set-ex2.cpp
)

add_custom_target(run-05-set-ex2
  DEPENDS 05-set-ex2
  COMMAND ./05-set-ex2
)
