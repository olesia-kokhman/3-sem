#ifndef ARRAY_H
#define ARRAY_H
#pragma once
#include <iostream>
#include <algorithm>
#include <random>
template <typename T>
class SomeArray {
private:
	T* array;
	int size;
public:
	SomeArray();
	SomeArray(int size);
	SomeArray(T* array, int size);
	~SomeArray();
	void printArray();
	void sortAscending();
	void sortDescending();
	T min();
};
#endif

