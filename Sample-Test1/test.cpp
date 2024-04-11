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
