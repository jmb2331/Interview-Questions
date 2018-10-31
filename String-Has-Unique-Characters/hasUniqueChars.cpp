#include "hasUniqueChars.h"

//bool isItAUniqueString(std::string someString) {
//	
//	bool checkArray[128];
//
//	for (int i = 0; i < 128; i++) {
//		checkArray[i] = false;
//	}
//
//	for (int j = 0; j < someString.length(); j++) {
//		int checkValue = someString[j];
//
//		if (checkArray[checkValue]) {
//			return false;
//		}
//		checkArray[checkValue] = true;
//	}
//
//	return true;
//}

// Using a bit vector
// Only works for a - z
bool isItAUniqueString(std::string someString) {

	int checker = 0;
	int value;

	for (int i = 0; i < someString.length(); i++) {
		value = someString[i] - 'a';

		if ((checker & (1 << value)) > 0) {
			return false;
		}
		checker |= (1 << value);
	}

	return true;
}
