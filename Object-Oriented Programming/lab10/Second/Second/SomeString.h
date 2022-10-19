#ifndef SOMESTRING_H
#define SOMESTRING_H
#pragma once
#include <cstring>
#include <iostream>
class SomeString {
private:
	char* array;
	int length;
public:
	SomeString();
	SomeString(int length);
	SomeString(char* array, int length);
	friend bool operator<(const SomeString& first, const SomeString& second);
	friend bool operator>(const SomeString& first, const SomeString& second);
	friend std::ostream& operator<<(std::ostream& out, const SomeString& object);
};
#endif

