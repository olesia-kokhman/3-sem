#ifndef _SORT_H
#define _SORT_H
#pragma once
#include <iostream>
#include <random>
using namespace std;
class Sort {
public:
	int length;
	double* array;
	int count = 0;
	int first;
	int last;
	bool isChecked = false;
public:
	Sort();
	Sort(int _length);
	~Sort();
	friend void operator<<(System::Windows::Forms::TextBox^ textBox, const Sort* array);
	friend void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, const Sort* array);
	void bubbleSort(System::Windows::Forms::RichTextBox^ richTextBox);
	void randomNumbers();
	void increaseCount();
	void isOrdered();
	bool getIsChecked();
	void firstLast();
	void bubble();
};
#endif

