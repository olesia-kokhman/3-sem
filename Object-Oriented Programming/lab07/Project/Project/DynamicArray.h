#ifndef _ARRAY_H
#define _ARRAY_H
#pragma once
#include <random>
#include <cassert>
using namespace std;
class DynamicArray {
private:
	int length;
	int* array;
public:
	DynamicArray();
	DynamicArray(const int _length);
	~DynamicArray();
	DynamicArray(const DynamicArray& some);
	void randomNumbers();
	int maxValue() const;
	int minValue() const;
	double avgValue() const;
	void selection();
	void bubble();
	void changeSize(const int _length);
	DynamicArray operator*(const int n);
	DynamicArray& operator=(const DynamicArray& array);
	int& operator[](const int index);
	DynamicArray operator+(const DynamicArray& other);
	DynamicArray operator-(const DynamicArray& other);
	friend int operator+(const DynamicArray& some);
	friend int operator-(const DynamicArray& some);
	friend void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, const DynamicArray *array);
	friend void operator<<(System::Windows::Forms::ListBox^ listBox, const DynamicArray *array);
	friend void operator<<(System::Windows::Forms::DataGridView^ dataGridView, const DynamicArray *array);
	friend void operator>>(System::Windows::Forms::DataGridView^ dataGridView, DynamicArray *array);
};
#endif
