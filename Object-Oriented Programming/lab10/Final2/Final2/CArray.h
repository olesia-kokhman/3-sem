#ifndef CARRAY_H
#define CARRAY_H
#pragma once
#include "CString.h"
template <typename T>
class CArray {
private:
	T* array;
	int size;
public:
	CArray();
	CArray(T* array, int size);
	~CArray();
	void printArray(System::Windows::Forms::RichTextBox^ richTextBox);
	void sortAscending();
	void sortDescending();
	T min();
};
#endif
template<>
class CArray<CString> {
private:
	CString* array;
	int size;
public:
	CArray() {
		this->size = 0;
		this->array = new CString[size];
	}
	CArray(CString* _array, int size) {
		this->size = size;
		this->array = new CString[size];
		for (int i = 0; i < size; i++) {
			this->array[i] = _array[i];
		}
	}
	void printArray(System::Windows::Forms::RichTextBox^ richTextBox) {
		for (int i = 0; i < size; i++) {
			richTextBox << array[i];
		}
		richTextBox->Text += "\n";
	}
	void sortAscending() {
		int length = size;
		while (length >= 0) {
			for (int i = 1; i < size; i++) {
				if (array[i - 1] > array[i]) {
					CString temp = array[i];
					array[i] = array[i - 1];
					array[i - 1] = temp;
				}
			}
			length--;
		}
	}
	void sortDescending() {
		int length = size;
		while (length >= 0) {
			for (int i = 1; i < size; i++) {
				if (array[i - 1] < array[i]) {
					CString temp = array[i];
					array[i] = array[i - 1];
					array[i - 1] = temp;
				}
			}
			length--;
		}
	}
	CString min() {
		CString min = array[0];
		for (int i = 0; i < size; i++) {
			if (array[i] < min) {
				min = array[i];
			}
		}
		return min;
	}
};




