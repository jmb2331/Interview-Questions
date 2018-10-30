#include "isStringAPermutationTest.h"
#include "isStringAPermutation.h"
#include <gtest\gtest.h>


TEST(IS_PERMUTATION, BOTH_EQUAL) {
	EXPECT_TRUE(isStringAPermutationOfTheOther("Hello", "Hello"));
}

TEST(IS_PERMUTATION, REVERSE) {
	EXPECT_TRUE(isStringAPermutationOfTheOther("Hello", "olleH"));
}

TEST(IS_PERMUTATION, MID_REVERSE) {
	EXPECT_TRUE(isStringAPermutationOfTheOther("ABCDEFG", "ADCGFED"));
}

TEST(IS_PERMUTATION, DIFFERENT_LENGTH) {
	EXPECT_FALSE(isStringAPermutationOfTheOther("DIFFERENT", "LENGTH"));
}

TEST(IS_PERMUTATION, NOT_PERMUTATION_SAME_LENGTH) {
	EXPECT_FALSE(isStringAPermutationOfTheOther("ABC", "DEF"));
}
