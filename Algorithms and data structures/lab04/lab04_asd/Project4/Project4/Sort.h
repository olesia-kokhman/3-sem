#ifndef SORT_H
#define SORT_H
#pragma once
#include <random>
using namespace std;
class Sort {
public:
	int length;
	double* array;
	bool isChecked = true;
public:
	Sort();
	Sort(int _length);
	~Sort();
	void randomNumbers();
	int findIndexMax();
	friend void quickSort(System::Windows::Forms::RichTextBox^ richTextBox, double* array, int left, int right);
	void isOrdered();
	bool getIsChecked();;
};
#endif

