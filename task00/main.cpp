#include "main.h" 
#include "logic.h" 

int main() {
	clock_t start = clock();
	
	int* answear = new int(50);
	int* answear_of_users = new int(50);
	int number_of_examples;

	string result = "";
	for (int i = 0; i <= 9;i++) {

	cout << creat_random_exampels(i, answear)<< endl;
	
	cin >> answear_of_users[i];

	result += checking_answear(i, answear[i], answear_of_users[i]);
	}

	clock_t end = clock();

	double duration = (double)(end - start) / CLOCKS_PER_SEC ;
	cout << result << endl;
	cout <<"you solved all the examples in " << duration <<" seconds" << endl;
	return 0;
}