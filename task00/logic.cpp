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
	/*while (a + b + c > 12||a + b + c < 0||a+b<0 ||
		a + b > 20||(a>10&&b>10)||(b > 10 && c > 10)||(a > 10 && c >10)) {

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
	}*/
	
	string s1 = sign1 == 1 ? "" : "+";
	string s2 = sign2 == 1 ? "" : "+";
	examples = to_string(a)  + s1  + to_string(b) +
		s2 + to_string(c) + "= ";
	answear[number_of_examples] = a+b+c;

	return examples;
}

string checking_answear(int number_of_examples, int answear, int answear_of_users) {
	int num = number_of_examples;
	string s = "";
	if (answear != answear_of_users) {
		s += "error in " + to_string(number_of_examples+1) 
			+ " examples, correct answer " + to_string(answear) + "\n";
		return s;

	} 
	return s;
}