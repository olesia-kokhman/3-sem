#include "Sort.h"
Sort::Sort() : length(0), array(0) {}
Sort::Sort(int _length) : length(_length) {
	array = new double[length];
}
void Sort::firstLast() {
	for (int i = 0; i < length; i++) {
		if (array[i] < 0) {
			first = i;
			break;
		}
	}
	for (int i = length - 1; i >= 0; i--) {
		if (array[i] < 0) {
			last = i;
			break;
		}
	}
 }
void Sort::bubble() {
	int size = length;
	while (length >= 0) {
		for (int i = 1; i < length; i++) {
			if (array[i - 1] > array[i]) {
				double temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
			}
		}
		size--;
	}
}
Sort::~Sort() {
	delete[] array;
}
void Sort::increaseCount() {
	count++;
}
void operator<<(System::Windows::Forms::TextBox^ textBox, const Sort* array) {
	for (int i = 0; i < array->length; i++) {
		textBox->Text += array->array[i].ToString("#,0.00") + " ";
	}
}
void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, const Sort* array) {
	for (int i = 0; i < array->length; i++) {
		richTextBox->Text += array->array[i].ToString("#,0.00") + " ";
	}
	richTextBox->Text += System::Convert::ToString("-------step " + array->count + " \n");
}
void Sort::randomNumbers() {
	random_device random_device;
	mt19937 generator(random_device()); 
	uniform_real_distribution<double> distribution(-200.0 , 200.0);
	for (int i = 0; i < length; i++) {
		array[i] = distribution(generator); 
	}
}
void Sort::bubbleSort(System::Windows::Forms::RichTextBox^ richTextBox) {
	if (first == last) {
		richTextBox << this;
		return;
	}
	int size = last;
	double temp = 0;
	while (size >= 0) {
		for (int i = first + 1 ; i <= size; i++) {
			if (array[i - 1] > array[i]) {
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
			}
		}
		size--;
		richTextBox << this;
		this->increaseCount();
	}
}
void Sort::isOrdered() {
	for (int i = first; i + 1 <= last; i++) {
		if (array[i] > array[i + 1]) {
			isChecked = false;
			return;
		}
	}
	isChecked = true;
}
bool Sort::getIsChecked() {
	return isChecked;
}