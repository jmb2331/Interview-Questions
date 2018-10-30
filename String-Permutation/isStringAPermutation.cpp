#include "isStringAPermutation.h"

bool isStringAPermutationOfTheOther(char* s1, char* s2) {
	if (strlen(s1) != strlen(s2)) {
		return false;
	}

	int s1_set[128];
	for (char x = s1[0]; s1 != '\0';  x++) {
		++s1_set[x];
	}

	for (char y = s2[0]; s2 != '\0';  y++) {
		if (s1_set[y]-- < 0) {
			return false;
		}
	}

	return true;
}