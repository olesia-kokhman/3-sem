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
SomeArray<T>::SomeArray(T* _array, int size) {
	this->size = size;
	array = new T[size];
	for (int i = 0; i < size; i++) {
		this->array[i] = _array[i];
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
	int length = size;
	while (length >= 0) {
		for (int i = 1; i < size; i++) {
			if (array[i - 1] > array[i]) {
				T temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
			}
		}
		length--;
	}
}
template <typename T>
void SomeArray<T>::sortDescending() {
	int length = size;
	while (length >= 0) {
		for (int i = 1; i < size; i++) {
			if (array[i - 1] < array[i]) {
				T temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
			}
		}
		length--;
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
