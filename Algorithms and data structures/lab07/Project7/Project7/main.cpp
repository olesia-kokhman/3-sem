#include <iostream>
#include <random>
using namespace std;
void randomNumbers(int* array, int size);
void bubbleSort(int* array, int size);
int main() {
	int size = 1024;
	/*int size = 4096;
	int size = 16384;
	int size = 65536;
	int size = 262144;
	int size = 1048576;
	int size = 4194304;*/
	int* array = new int[size];

	randomNumbers(array, size);
	bubbleSort(array, size);
	return 0;
}
void randomNumbers(int* array, int size) {
	random_device random_device;
	mt19937 generator(random_device());
	uniform_int_distribution<int> distribution(0, 200);
	for (int i = 0; i < size; i++) {
		array[i] = distribution(generator);
	}
}
void bubbleSort(int* array, int size) {
	int length = size;
	while (length >= 0) {
		for (int i = 1; i < size; i++) {
			if (array[i - 1] > array[i]) {
				int temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
			}
		}
		length--;
	}
}