#include "main.h"
#include "util.h" 

//int time(int play) {
//	int time;
//
//	return time;
//}



string creat_random_exampels(int number_of_examples, int* answear) {

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
	int c = random_number() * sign1;
	int b = random_number() * sign2;
	while (a + b + c > 20||a + b + c < 0||a+b<0 || a + b > 20) {

		int sign1 = random_sign();
		int sign2;
		if (sign1 == -1) {
			sign2 = 1;
		}
		else {
			sign2 = -1;
		}

		int a = random_number();
		int b = random_number() * sign1;
		int c = random_number() * sign2;
	}
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	string s1 = sign1 == 1 ? "" : "+";
	string s2 = sign2 == 1 ? "" : "+";
	examples = to_string(a)  + s1  + to_string(b) +
		s2 + to_string(c) + "= ";
	answear[number_of_examples] = a+b+c;

	return examples;
}

string checking_answear(int number_of_examples, int answear, int answera_of_users, string s) {
	int num = number_of_examples;

	if (answear != answera_of_users) {
		s += "error in " + to_string(number_of_examples) 
			+ " examples, correct answer " + to_string(answear) + "\n";
	}

	return s;
}