#include "main.h"

int random_number() {

	int number = rand() % 10 + 1;
	return number;
}

int random_sign() {
	int sign;
	if (random_number() % 2 == 0) {
		sign = -1;
	}
	else {
		sign = 1;
	}
	return sign;
}

//int answear(int a, int b, int c) {
//	return a + b + c;
//}