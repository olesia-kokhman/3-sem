#ifndef SORT_H
#define SORT_H
#pragma once
#include <random>
#include <cmath>
using namespace std;
class Sort {
public:
	double** array;
private:
	int rows;
	int columns;
	bool isChecked;
	int counter = 0;
public:
	Sort();
	Sort(int _rows, int _columns);
	~Sort();
	void randomNumbers();
	void changeMaxes();
	void shellSort(System::Windows::Forms::RichTextBox^ richTextBox);
	void isOrdered();
	bool getChecked();
	void increaseCounter();
	int getRows();
	int getColumns();
	friend void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, Sort* sort);
};
#endif

