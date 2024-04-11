#include "pch.h"
#include "../Project9/calc.cpp"
TEST(ZegopCase, ZegopTest) {
	Calc calc;
	EXPECT_EQ(1, calc.getZegop(4, 0));
	EXPECT_EQ(125, calc.getZegop(5, 3));
	EXPECT_EQ(32, calc.getZegop(2, 5));
	EXPECT_EQ(100, calc.getZegop(100, 1))
}