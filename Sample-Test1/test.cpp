#include "pch.h"
#include "../Project14/calc.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, getGopTest) {
	calc c;
	EXPECT_EQ(c.getGop(1,2), 2);
	EXPECT_EQ(c.getGop(3,6), 18);
	EXPECT_EQ(c.getGop(4,5), 20);
}

TEST(ZegopCase, ZegopTest) {
	Calc calc;
	EXPECT_EQ(1, calc.getZegop(4, 0));
	EXPECT_EQ(125, calc.getZegop(5, 3));
	EXPECT_EQ(32, calc.getZegop(2, 5));
	EXPECT_EQ(100, calc.getZegop(100, 1))
}
