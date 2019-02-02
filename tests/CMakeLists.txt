cmake_minimum_required(VERSION 3.3)

enable_testing()

# re3 basic test
add_executable(re3_test re3_test.cc)

target_link_libraries(re3_test PUBLIC
  gtest_main
  libre3
  )

add_test(
  NAME re3_test
  COMMAND re3_test
  )
