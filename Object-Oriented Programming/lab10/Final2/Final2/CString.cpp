#include "CString.h"
CString::CString() {
	this->length = 0;
	this->array = new char[length];
}
CString::CString(int length) {
	this->length = length;
	this->array = new char[length];
}
CString::CString(char* _array, int length) {
	this->length = length;
	this->array = new char[length];
	for (int i = 0; i < length; i++) {
		array[i] = _array[i];
	}
}
void CString::random() {
	int size = 26;
	char* symbols = new char[size] { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(0, 25);
	int index;
	for (int i = 0; i < length; i++) {
		index = distribution(generator);
		array[i] = symbols[index];
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
void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, CString& object) {
		std::string str = "";
		for (int i = 0; i < object.length; i++) {
			str += object.array[i];
		}
		System::String^ last = gcnew System::String(str.c_str());
		richTextBox->Text += last  + " ";
}