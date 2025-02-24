#include "main.h"
#include "util.h" 

int time(int play) {
	int time;

	return time;
}



string creat_random_exampels(int play,int number_of_examples) {

	string examples = "";
	int sign1 = random_sign();
	int sign2;
	if (sign1 == -1) {
		sign2 = 1;
	}
	else {
		sign2 = -1;
	}

	int a = random_number();
	int c = random_number()*sign1;
	int b = random_number()*sign2;
	while (a + b + c < 0) {

		int sign1 = random_sign();
		int sign2;
		if (sign1 == -1) {
			sign2 = 1;
		}
		else {
			sign2 = -1;
		}

		int a = random_number();
		int c = random_number() * sign1;
		int b = random_number() * sign2;
	}

	examples = to_string(a) + " " + to_string(b)+
		" "+ to_string(c) + "=";

	int answear = a + b + c;

	return examples;
}

void answear(int number_of_examples[51], int answear[51],int answera_of_users[51]) {
	int num = number_of_examples[]
	if(answear[]!=answera_of_users)

}