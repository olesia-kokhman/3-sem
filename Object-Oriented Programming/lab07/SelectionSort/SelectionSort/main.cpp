#include <iostream> 
#include <random>
using namespace std;
void randomNumbers(int* array, int size);
void selectionSort(int* array, int size);
void printArray(int* array, int size);
void bubbleSort(int* array, int size);
int main() {
	int size = 10;
	int* array = new int[] { 1, 0, 7, 5, 4, 0, 9, 6, 5 ,8};
	//randomNumbers(array, size);
	printArray(array, size);
	selectionSort(array, size);
	//bubbleSort(array, size);
	printArray(array, size);
	return 0;
}
void randomNumbers(int* array, int size) {
	random_device random_device;
	mt19937 generator(random_device());
	uniform_int_distribution<int> distribution(0, 20);
	for (int i = 0; i < size; i++) {
		array[i] = distribution(generator);
	}
}
void selectionSort(int* array, int size) {
	int max, count;
	int temp;
	for (int counter = 0; counter < size; counter++) {
		count = counter;
		max = array[counter];
		for (int i = counter; i < size; i++) {
			if (array[i] > max) {
				max = array[i];
				count = i;
			}
		}
		temp = array[counter];
		array[counter] = array[count];
		array[count] = temp;
	}
}
void printArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << "\n";
}
void bubbleSort(int* array, int size) {
	int temp = 0;
	while (size >= 0) {
		for (int i = 1; i < size; i++) {
			if (array[i - 1] > array[i]) {
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
			}
		}
		size--;
	}
}