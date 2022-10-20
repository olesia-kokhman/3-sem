#ifndef CSTRING_H
#define CSTRING_H
#pragma once
#include <cstring>
#include <iostream>
class CString {
private:
	char* array;
	int length;
public:
	CString();
	CString(char* array, int length);
	friend bool operator<(const CString& first, const CString& second);
	friend bool operator>(const CString& first, const CString& second);
	friend void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, const CString& object);
	friend void operator+=(std::string str, const CString& object);
};
#endif

