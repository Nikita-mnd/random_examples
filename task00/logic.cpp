#include "main.h"
#include "util.h" 

int time(int play) {
	int time;

	return time;
}



string creat_random_exampels(int number_of_examples,int* answear) {

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
	int ans = a + b + c;
	answear[number_of_examples] = ans;

	return examples;
}

string answear(int number_of_examples, int answear,int answera_of_users,string s) {
	int num = number_of_examples;
	
	if (answear != answera_of_users) {
		s += "error in " + to_string(number_of_examples) +" examples \n";
	}

	return s;
}