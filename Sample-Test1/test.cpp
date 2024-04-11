#include "pch.h"
#include "../Project14/calc.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestGetMinus) {
	calc Calc;

	EXPECT_EQ(Calc.GetMinus(2, 1), 1);
	EXPECT_EQ(Calc.GetMinus(10, 0), 10);
	EXPECT_EQ(Calc.GetMinus(100, 10), 90);
	EXPECT_EQ(Calc.GetMinus(9999, 1111), 8888);
}