#include "main.h"
#include "util.h" 

string creat_random_exampels(int number_of_examples, int* answear) {

	int sign1 = random_sign();
	int sign2 = sign1 == -1 ? 1 : -1;

	int a = random_number();
	int b = random_number() * sign1;
	int c = random_number() * sign2;

	while (a + b <= 0 || a + b > 20 || b >= 10 || a >= 10 || b <= -10) {
		a = random_number();
		b = random_number() * sign1;
	}

	while (c >= 10 || c <= -10 || a + b + c <= 0 || a + b + c > 15) {
		c = random_number() * sign2;
	}

	string examples = "";
	string sign = sign1 == 1 ? "+" : "";
	examples = to_string(a) + sign + to_string(b) +
		(sign == "+" ? "" : "+") + to_string(c) + "= ";
	answear[number_of_examples] = a + b + c;

	return examples;
}

string checking_answear(int number_of_examples, int answear, int answear_of_users) {

	string s = "";
	if (answear != answear_of_users) {
		s += "Error in " + to_string(number_of_examples + 1)
			+ " examples, correct answer " + to_string(answear) + "\n";
		return s;

	}

	return s;
}