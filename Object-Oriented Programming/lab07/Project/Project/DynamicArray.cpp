#include "DynamicArray.h"
DynamicArray::DynamicArray() {
	length = 0;
	array = new int[length];
}
DynamicArray::DynamicArray(const int _length) : length(_length) {
	array = new int[length];
}
DynamicArray::~DynamicArray() {
	delete[] array;
}
DynamicArray::DynamicArray(const DynamicArray& some) { // copy
	this->length = some.length;
	this->array = new int[this->length];
	for (int i = 0; i < length; i++) {
		this->array[i] = some.array[i];
	}
}
void DynamicArray::randomNumbers() {
	random_device random_device;
	mt19937 generator(random_device());
	uniform_int_distribution<int> distribution(0, 20);
	for (int i = 0; i < length; i++) {
		array[i] = distribution(generator);
	}
}
int DynamicArray::maxValue() const {
	int max = array[0];
	for (int i = 0; i < length; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}
int DynamicArray::minValue() const {
	int min = array[0];
	for (int i = 0; i < length; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}
double DynamicArray::avgValue() const {
	double avg = 0;
	for (int i = 0; i < length; i++) {
		avg += array[i];
	}
	return avg / length;
}
void DynamicArray::selection() { // метод вибірки за спаданням
	int max, count;
	int temp;
	for (int counter = 0; counter < length; counter++) {
		count = counter;
		max = array[counter];
		for (int i = counter; i < length; i++) {
			if (array[i] > max) {
				max = array[i];
				count = i;
			}
		}
		temp = array[counter];
		array[counter] = array[count];
		array[count] = temp;
	}
}
void DynamicArray::bubble() { // метод бульбашки за зростанням
	int size = length;
	int temp = 0;
	while (size >= 0) {
		for (int i = 1; i < size; i++) {
			if (array[i - 1] > array[i]) {
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
			}
		}
		size--;
	}
}
void DynamicArray::changeSize(const int _length) {
	length = _length;
	array = new int[length];
}
int operator+(const DynamicArray& some) {
	int sum = 0;
	for (int i = 0; i < some.length; i++) {
		sum += some.array[i];
	}
	return sum;
}
int operator-(const DynamicArray& some) {
	int sum = some.array[0];
	for (int i = 1; i < some.length; i++) {
		sum -= some.array[i];
	}
	return sum;
}
DynamicArray DynamicArray::operator+(const DynamicArray& other) {
	if (other.length >= this->length) {
		for (int i = 0; i < this->length; i++) {
			array[i] += other.array[i];
		}
	}
	return *this;
}
DynamicArray DynamicArray::operator-(const DynamicArray& other) {
	if (other.length >= this->length) {
		for (int i = 0; i < this->length; i++) {
			array[i] -= other.array[i];
		}
	}
	return *this;
}
DynamicArray DynamicArray::operator*(const int n) {
	for (int i = 0; i < this->length; i++) {
		this->array[i] *= n;
	}
	return *this;
}
void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, const DynamicArray *array) {
	richTextBox->Clear();
	for (int i = 0; i < array->length; i++) {
		richTextBox->Text += System::Convert::ToString(array->array[i]) + " ";
	}
}
void operator<<(System::Windows::Forms::ListBox^ listBox, const DynamicArray *array) {
	listBox->Items->Clear();
	for (int i = 0; i < array->length; i++) {
		listBox->Items->Add(System::Convert::ToString(array->array[i]));
	}
}
void operator<<(System::Windows::Forms::DataGridView^ dataGridView,const DynamicArray *array) {
	dataGridView->Rows->Clear();
	for (int i = 0; i < array->length; i++) {
		dataGridView->Rows->Add();
		dataGridView->Rows[i]->Cells[0]->Value = System::Convert::ToString(array->array[i]);
	}
}
void operator>>(System::Windows::Forms::DataGridView^ dataGridView, DynamicArray *some) {
	some->length = dataGridView->Rows->Count-1;
	for (int i = 0; i < some->length; i++) {
		some->array[i] = System::Convert::ToInt16(dataGridView->Rows[i]->Cells[0]->Value);
	}
}
int& DynamicArray::operator[](const int index) {
	assert(index >= 0 && index < length);
	return array[index];
}
DynamicArray& DynamicArray::operator=(const DynamicArray& some) {
	if (this == &some) {
		return *this;
	}
	length = some.length;
	for (int i = 0; i < length; i++) {
		array[i] = some.array[i];
	}
	return *this;
}