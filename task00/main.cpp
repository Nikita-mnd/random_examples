#include "main.h" 
#include "logic.h" 

int main() {
	clock_t start = clock();
	int* answear = new int(51);
	int number_of_examples = 1;
	cout << creat_random_exampels(number_of_examples, answear)<< endl;
	clock_t end = clock();
	double duration = (double)(end - start) / CLOCKS_PER_SEC * 1000;
	cout << duration << endl;
	return 0;
}