#pragma once

#include "hasUniqueChars.h"

TEST(IS_IT_A_UNIQUE_STRING, NULLSTRING) {
	EXPECT_TRUE(isItAUniqueString(""));
}

TEST(IS_IT_A_UNIQUE_STRING, UNIQUE_STRING) {
	EXPECT_TRUE(isItAUniqueString("abcdefghijklmnopqrstuvwxyz"));
}

TEST(IS_IT_A_UNIQUE_STRING, REPEATS) {
	EXPECT_FALSE(isItAUniqueString("aabcdedfghijklmnopqrstuvwxyz"));
}

TEST(IS_IT_A_UNIQUE_STRING, CONTAINS_NONALPHANUMERIC) {
	EXPECT_TRUE(isItAUniqueString("abc123 *()"));
}