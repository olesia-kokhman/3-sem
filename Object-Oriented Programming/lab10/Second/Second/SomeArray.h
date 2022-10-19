#ifndef SOMEARRAY_H
#define SOMEARRAY_H
#pragma once
#include <iostream>
#include <algorithm>
#include <random>
#include "SomeString.h"
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

int main(int args, char* argv) {
	int size = 5;
	char one[] = "first";
	char two[] = "second";
	char three[]  = "third";
	char four[] = "fourth";
	char five[] = "fifth";
	SomeString first = SomeString(one, sizeof(one) / sizeof(char));
	SomeString second = SomeString(two, sizeof(two) / sizeof(char));
	SomeString third = SomeString(three, sizeof(three) / sizeof(char));
	SomeString fourth = SomeString(four, sizeof(four) / sizeof(char));
	SomeString fifth = SomeString(five, sizeof(five) / sizeof(char));
	SomeString* array = new SomeString[size]{ first, second, third , fourth, fifth};
	SomeArray<SomeString> object(array, size);
	std::cout << "input array:" << std::endl;
	object.printArray();
	std::cout << "min = " << object.min() << std::endl;
	std::cout << "sorted up:" << std::endl;
	object.sortAscending();
	object.printArray();
	std::cout << "sorted dowm:" << std::endl;
	object.sortDescending();
	object.printArray(); 
	return 0;
}
