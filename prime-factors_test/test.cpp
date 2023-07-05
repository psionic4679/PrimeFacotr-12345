#include "pch.h"
#include "../prime-factors/prime-factors.cpp"

class PrimeFixture :public testing::Test
{
public:
	PrimeFactors pf;
	vector<int> expected;
};

TEST_F(PrimeFixture, PrimeTest) {
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST_F(PrimeFixture, PrimeOfTest1) {
	expected = {};
	EXPECT_EQ(expected, pf.of(1));
}

TEST_F(PrimeFixture, PrimeOfTest2) {
	expected = { 2 };
	EXPECT_EQ(expected, pf.of(2));
}

TEST_F(PrimeFixture, PrimeOfTest3) {
	expected = { 3 };
	EXPECT_EQ(expected, pf.of(3));
}

TEST_F(PrimeFixture, PrimeOfTest4) {
	expected = {2,2 };
	EXPECT_EQ(expected, pf.of(4));
}

TEST_F(PrimeFixture, PrimeOfTest6) {
	expected = { 2,3 };
	EXPECT_EQ(expected, pf.of(6));
}

TEST_F(PrimeFixture, PrimeOfTest9) {
	expected = { 3,3 };
	EXPECT_EQ(expected, pf.of(9));
}

TEST_F(PrimeFixture, PrimeOfTest12) {
	expected = { 2,2,3 };
	EXPECT_EQ(expected, pf.of(12));
}