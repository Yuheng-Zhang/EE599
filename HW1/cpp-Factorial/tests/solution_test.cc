#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FactorialTest, HandleNegetive_Nonrecursive) {
  Solution solution;
  EXPECT_EQ(solution.Factorial(-2), -1);
}

TEST(FactorialTest, HandleZero_Nonrecursive) {
  Solution solution;
  EXPECT_EQ(solution.Factorial(0), 1);
}

TEST(FactorialTest, HandlePositive_Nonrecursive) {
  Solution solution;
  EXPECT_EQ(solution.Factorial(1), 1);
}

TEST(FactorialTest, HandlePositive_Nonrecursive) {
  Solution solution;
  EXPECT_EQ(solution.Factorial(5), 120);
}

TEST(FactorialTest, HandleNegetive_Recursive) {
  Solution solution;
  EXPECT_EQ(solution.FactorialRecursive(-2), -1);
}

TEST(FactorialTest, HandleZero_Recursive) {
  Solution solution;
  EXPECT_EQ(solution.FactorialRecursive(0), 1);
}

TEST(FactorialTest, HandlePositive_Recursive) {
  Solution solution;
  EXPECT_EQ(solution.FactorialRecursive(1), 1);
}

TEST(FactorialTest, HandlePositive_Recursive) {
  Solution solution;
  EXPECT_EQ(solution.FactorialRecursive(5), 120);
}