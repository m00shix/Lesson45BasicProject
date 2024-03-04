#include <iostream>

int sum_negative_elem(int* array, int size, int min, int max){

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (max - min + 1) + min;
	}
}

int max_elem(int* array, int size) {

	int max = 0;

	for (int i = 0; i < size; i++)
	{
		if (max > array[i])
		{
			max = i;
		}
	}
	return max;
}

void rand_init(int* array, int size, int min, int max) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (max - min + 1) + min;
	}
}

int max_min_elem(int* array, int size) {

}