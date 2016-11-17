add_executable(04-list-ex1
  list-ex1.cpp
)

add_executable(04-list-ex2
  list-ex2.cpp
)

add_custom_target(run-04-list-ex1
  DEPENDS 04-list-ex1
  COMMAND ./04-list-ex1
)

add_custom_target(time-04-list-ex1
  DEPENDS 04-list-ex1
  COMMAND time ./04-list-ex1
)

add_custom_target(run-04-list-ex2
  DEPENDS 04-list-ex2
  COMMAND ./04-list-ex2
)

add_custom_target(time-04-list-ex2
  DEPENDS 04-list-ex2
  COMMAND time ./04-list-ex2
)
