#ifndef SORT_H
#define _SORT_H
#pragma once
#include <random>
using namespace std;
class Sort {
public:
	int* firstArray;
	int* secondArray;
	int* resultArray;
	int counter = 0;
private:
	int length;
	int anotherCounter = 0;
	bool isChecked;
public:
	Sort();
	Sort(int _length);
	~Sort();
	void makeResultArray();
	void randomNumbers();
	void selectionSort(System::Windows::Forms::RichTextBox^ richTextBox);
	void isOrdered();
	bool getIsChecked();
	void increaseCount();
	friend void operator<<(System::Windows::Forms::TextBox^ textBox, const Sort* sort);
	friend void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, const Sort* sort);
};
#endif

