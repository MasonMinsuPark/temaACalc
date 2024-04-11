#include "pch.h"
#include "../Project14/calc.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(calc, getSumSumTest) {
	calc calculator;

	EXPECT_EQ(calculator.getSumSum(0,0,0), 0);
	EXPECT_EQ(calculator.getSumSum(1, 1, 1), 3);
	EXPECT_EQ(calculator.getSumSum(-1, -1, -1), -3);
}