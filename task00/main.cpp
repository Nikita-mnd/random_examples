#include "main.h" 
#include "logic.h" 

int main() {

	int* answear = new int(51);
	int number_of_examples = 1;
	cout << creat_random_exampels(number_of_examples, answear);

	return 0;
}