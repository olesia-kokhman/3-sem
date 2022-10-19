#ifndef SORT_H
#define SORT_H
#pragma once
#include <random>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Sort {
private:
	int length;
	string* array;
	bool isChecked = true;
	string* cities;
	int citiesLength;
	int mainLength = 0;
	string* mainArray;
public:
	Sort();
	Sort(int _length);
	~Sort();
	void randomNumbers();
	void isOrdered();
	bool getChecked();
	void initCities();
	void deleteLongCities();
	string getElement(int index);
	int getSize();
	int convertCharToInt(char value);
	void stringCountingSort(System::Windows::Forms::RichTextBox^ richTextBox);

};
#endif
