#include "../includes/re3.h"

#include "../third_party/googletest/googletest/include/gtest/gtest.h"

namespace {

  TEST(RE3Test, DoNothing) {
    PrintHello();
  }
  
}  // namespace

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
