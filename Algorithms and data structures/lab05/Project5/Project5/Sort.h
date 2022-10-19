#ifndef SORT_H
#define SORT_H
#pragma once
#include <iostream>
#include <random>
void mergeSort(System::Windows::Forms::RichTextBox^ richTextBox, int arr[], int l, int r);
void merge(System::Windows::Forms::RichTextBox^ richTextBox, int arr[], int l, int m, int r);
void printArray(System::Windows::Forms::RichTextBox^ richTextBox, int array[], int length);
using namespace std;
class Sort {
public:
	int length;
	int* array;
	bool isChecked = true;
	int* resultArray;
	int count = 0;
public:
	Sort();
	Sort(int _length);
	~Sort();
	void randomNumbers();
	void delete3();
	void pow2();
	void isOrdered();
	bool getIsChecked();
};
#endif


