#include <gtest/gtest.h>

#pragma comment(lib, "gtestd.lib")

int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
