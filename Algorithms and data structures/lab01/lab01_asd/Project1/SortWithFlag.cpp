#include "SortWithFlag.h"
SortWithFlag::~SortWithFlag()  {
	delete[] array;
};
void SortWithFlag::bubbleSort(System::Windows::Forms::RichTextBox^ richTextBox) {
	int size = last;
	double temp = 0;
	bool isSorted = true;
	while (size >= 0) {
		for (int i = first + 1; i <= size; i++) {
			if (array[i - 1] > array[i]) {
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				isSorted = false;
			}
		}
		if (isSorted) {
			break;
		}
		else {
			isSorted = true;
		}
		size--;
		richTextBox << this;
		this->increaseCount();
	}
}
SortWithFlag::SortWithFlag(const Sort* sort) {
	length = sort->length;
	array = new double[length];
	for (int i = 0; i < length; i++) {
		array[i] = sort->array[i];
	}
}
