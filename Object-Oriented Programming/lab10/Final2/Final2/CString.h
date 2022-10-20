#ifndef CSTRING_H
#define CSTRING_H
#pragma once
#include <cstring>
#include <iostream>
#include <random>
class CString {
private:
	char* array;
	int length;
public:
	CString();
	CString(char* array, int length);
	CString(int length);
	void random();
	friend bool operator<(const CString& first, const CString& second);
	friend bool operator>(const CString& first, const CString& second);
	friend void operator<<(System::Windows::Forms::RichTextBox^ richTextBox,  CString& object);
};
#endif
