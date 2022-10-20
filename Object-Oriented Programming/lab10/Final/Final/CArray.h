#ifndef CARRAY_H
#define CARRAY_H
#pragma once
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


