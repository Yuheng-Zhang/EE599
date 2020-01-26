#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(PrintNameShould, ReturnMyName) {
  Solution solution;
  std::string actual = solution.PrintName();
  std::string expected = "My name is Yuheng Zhang.";
  EXPECT_EQ(expected, actual);
}

TEST(PrintMajorShould, ReturnMyMajor) {
  Solution solution;
  std::string actual = solution.PrintMajor();
  std::string expected = "My major is EE.";
  EXPECT_EQ(expected, actual);
}