#include "main.h"

int random_number() {
	
	//srand(static_cast<unsigned int>(time(nullptr)));

	/*time_t currentTime;
	time(&currentTime);
	time(nullptr);*/
	int number = rand() % 15 + 1;
	return number;
}

int random_sign() {
	//srand(static_cast<unsigned int>(time(nullptr)));
	//time_t currentTime;
	//time(&currentTime);
	//time(nullptr);
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

//int answear(int a, int b, int c) {
//	return a + b + c;
//}