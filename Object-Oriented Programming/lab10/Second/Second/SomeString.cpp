#include "SomeString.h"
SomeString::SomeString() {
	int length = 0;
	char* array = new char[length];
}
SomeString::SomeString(int length) {
	this->length = length;
	array = new char[length];
}
SomeString::SomeString(char* _array, int length) {
	this->length = length;
	this->array = new char[length];
	for (int i = 0; i < length; i++) {
		array[i] = _array[i];
	}
}
bool operator< (const SomeString& first, const SomeString& second) {
	if (strcmp(first.array, second.array) < 0) {  
		return true;
	}
	else {
		return false;
	}
}
bool operator>(const SomeString& first, const SomeString& second) {
	if (strcmp(first.array, second.array) > 0) {
		return true;
	}
	else {
		return false;
	}
}
std::ostream& operator<<(std::ostream& out, const SomeString& object) {
	for (int i = 0; i < object.length; i++) {
		out << object.array[i];
	}
	return out;
}