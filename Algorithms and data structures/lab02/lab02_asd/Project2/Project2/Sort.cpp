#include "Sort.h"
Sort::Sort() : length(0) {
	firstArray = new int[length];
	secondArray = new int[length];
}
Sort::Sort(int _length) {
	length = _length;
	firstArray = new int[length];
	secondArray = new int[length];
}
Sort::~Sort() {
	delete[] firstArray;
	delete[] secondArray;
	delete[] resultArray;
}
void Sort::randomNumbers() {
	random_device random_device;
	mt19937 generator(random_device());
	uniform_int_distribution<> distribution(-200, 200);
	for (int i = 0; i < length; i++) {
		firstArray[i] = distribution(generator);
		secondArray[i] = distribution(generator);
	}
}
bool Sort::getIsChecked() {
	return isChecked;
}
void Sort::makeResultArray() {
	for (int i = 0; i < length; i++) {
		if (firstArray[i] % 2 == 0) {
			counter++;
		}
	}
	for (int i = 0; i < length; i++) {
		if (secondArray[i] % 2 != 0) {
			counter++;
		}
	}
	resultArray = new int[counter];
	int tempCounter = 0;
	for (int i = 0; i < length; i++) {
		if (firstArray[i] % 2 == 0) {
			resultArray[tempCounter] = firstArray[i];
			tempCounter++;
		}
	}
	for (int i = 0; i < length; i++) {
		if (secondArray[i] % 2 != 0) {
			resultArray[tempCounter] = secondArray[i];
			tempCounter++;
		}
	}
}
void Sort::isOrdered() {
	for (int i = 0; i + 1 < counter; i++) {
		if (resultArray[i] > resultArray[i + 1]) {
			isChecked = false;
			return;
		}
	}
	isChecked = true;
}
void Sort::selectionSort(System::Windows::Forms::RichTextBox^ richTextBox) {
	int min = 0;
	int count = 0;
	int mainIndex = 0;
	int temp = 0;
	while (mainIndex < counter) {
		min = resultArray[mainIndex];
		count = mainIndex;
		for (int i = mainIndex; i < counter; i++) {
			if (resultArray[i] < min) {
				min = resultArray[i];
				count = i;
			}
		}
		temp = resultArray[mainIndex];
		resultArray[mainIndex] = min;
		resultArray[count] = temp;
		mainIndex++;
		richTextBox << this;
		this->increaseCount();
	}
}
void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, const Sort* sort) {
	for (int i = 0; i < sort->counter; i++) {
		richTextBox->Text += sort->resultArray[i].ToString() + " ";
	}
	richTextBox->Text += System::Convert::ToString("-------step " + sort->anotherCounter + " \n");
}
void Sort::increaseCount() {
	anotherCounter++;
}
