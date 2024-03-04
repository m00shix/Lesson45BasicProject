#include <iostream>

using namespace std;

int sum_negative_elem(int* array, int size, int min, int max);
int max_elem(int* array, int size);
void rand_init(int* array, int size, int min, int max);

int main() {
	int size = 0;
	do {
		cout << "Input number: ";
		cin >> size;
	} while (size < 1);



	return 0;
}