#include "CArray.h"
template <typename T>
CArray<T>::CArray() {
	this->size = 0;
	array = new T[size];
}
template <typename T>
CArray<T>::CArray(T* _array, int size) {
	this->size = size;
	array = new T[size];
	for (int i = 0; i < size; i++) {
		this->array[i] = _array[i];
	}
}
template <typename T>
CArray<T>::~CArray() {
	delete[] array;
}
template <typename T>
void CArray<T>::printArray(System::Windows::Forms::RichTextBox^ richTextBox) {
	for (int i = 0; i < size; i++) {
		std::string init;
		init += array[i];
		String^ str = gcnew String(init.c_str());
		//richTextBox << this;
		richTextBox->Text += str + " ";
	}
	richTextBox->Text += "\n";
}
template <typename T>
void CArray<T>::sortAscending() {
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
void CArray<T>::sortDescending() {
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
T CArray<T>::min() {
	T min = array[0];
	for (int i = 0; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}
