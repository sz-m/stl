add_executable(05-set
  set-ex1.cpp
)

add_custom_target(run-05-set
  DEPENDS 05-set
  COMMAND ./05-set
)
