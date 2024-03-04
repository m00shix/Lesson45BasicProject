#include <iostream>
#include <string>

using namespace std;

void rand_init(int* array, int size, int min, int max) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (max - min + 1) + min;
	}
}

string convert_array_string(int* array, int size) {
	string msg = "";

	for (int i = 0; i < size; i++)
	{
		msg += to_string(array[i]) + " ";
	}
	return msg;
}

int negative_element_sum(int* array, int size) {

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0) {
			sum += array[i];
		}
	}
	return sum;
}

int max_element_index(int* array, int size) {

	int max = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[max] < array[i])
		{
			max = i;
		}
	}
	return max;
}

int min_element_index(int* array, int size) {

	int min = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[min] > array[i])
		{
			min = i;
		}
	}
	return min;
}

int product_betweeen_min_max(int* array, int size) {

	int min = min_element_index(array, size);
	int max = max_element_index(array, size);

	if (abs(min - max) < 2)
	{
		return 0;
	}

	if (min > max)
	{
		int t = min;
		min = max;
		max = t;
	}

	int product = 1;

	for (int i = min + 1; i < max; i++)
	{
		product *= array[i];
	}

	return product;
}