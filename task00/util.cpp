#include "main.h"

int random_number() {
	int number = rand() % 15 + 1;
	return number;
}

int random_sign() {
	srand(time(NULL));  
	int sign;
	if (random_number() % 2 == 0) {
		sign = -1;
	}
	else {
		sign = 1;
	}
	return sign;
}
