#include "CString.h"
CString::CString() {
	int length = 0;
	char* array = new char[length];
}
CString::CString(char* _array, int length) {
	this->length = length;
	this->array = new char[length];
	for (int i = 0; i < length; i++) {
		array[i] = _array[i];
	}
}
bool operator< (const CString& first, const CString& second) {
	if (strcmp(first.array, second.array) < 0) {
		return true;
	}
	else {
		return false;
	}
}
bool operator>(const CString& first, const CString& second) {
	if (strcmp(first.array, second.array) > 0) {
		return true;
	}
	else {
		return false;
	}
}
void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, const CString& object) {
	for (int i = 0; i < object.length; i++) {
		richTextBox->Text += (object.array[i]).ToString();
	}
}
void operator+=(std::string str, const CString& object) {
	for (int i = 0; i < object.length; i++) {
		str += object.array[i];
	}
}