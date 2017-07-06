/*
 * test_factorial.cc
 *
 *  Created on: 2017Äê7ÔÂ4ÈÕ
 *      Author: Administrator
 */
#include "gtest/gtest.h"
#include "factorial.h"

TEST(IntegerFunctionTest, positive)
{
	 EXPECT_EQ(1, factorial(1));
	 EXPECT_EQ(2, factorial(2));
	 EXPECT_EQ(6, factorial(3));
	 EXPECT_EQ(40320, factorial(8));
}

TEST(IntegerFunctionTest, negative)
{
	 EXPECT_EQ(1, factorial(-5));
	 EXPECT_EQ(1, factorial(-1));
	 EXPECT_GT(factorial(-10), 0);
}

TEST(IntegerFunctionTest, zero)
{
     EXPECT_EQ(1, factorial(0));
}

TEST(addTest, positive)
{
     EXPECT_EQ(1, add(1,3));
}



