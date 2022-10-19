#include "SomeArray.h"
template <typename T>
SomeArray<T>::SomeArray() {
	this->size = 0;
	array = new T[size];
}
template <typename T>
SomeArray<T>::SomeArray(int size) {
	this->size = size;
	array = new T[size];
}
template <typename T>
SomeArray<T>::SomeArray(T* array, int size) {
	this->size = size;
	array = new T[size];
	for (int i = 0; i < size; i++) {
		this->array[i] = array[i];
	}
}
template <typename T>
SomeArray<T>::~SomeArray() {
	delete[] array;
}
template <typename T>
void SomeArray<T>::printArray() {
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << "\n";
}
template <typename T>
void SomeArray<T>::sortAscending() {
	std::sort(array, array + size);
}
template <typename T>
void SomeArray<T>::sortDescending() {
	std::sort(array, array + size);
	T* tempArray = new T[size];
	int count = 0;
	for (int i = size - 1; i >= 0; i--) {
		tempArray[i] = array[count];
		count++;
	}
	int index = 0;
	for (int i = size - 1; i >= 0; i++) {
		array[i] = tempArray[index];
		index++;
	}
}
template <typename T>
T SomeArray<T>::min() {
	T min = array[0];
	for (int i = 0; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}