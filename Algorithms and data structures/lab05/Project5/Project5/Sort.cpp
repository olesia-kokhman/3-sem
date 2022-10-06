#include "Sort.h"
#include "Sort.h"
Sort::Sort() {
	length = 0;
	array = new int[length];
};
Sort::Sort(int _length) {
	length = _length;
	array = new  int[length];
}
Sort::~Sort() {
	delete[] array;
}
void Sort::randomNumbers() {
	random_device random_device;
	mt19937 generator(random_device());
	uniform_int_distribution<> distribution(0, 200);
	for (int i = 0; i < length; i++) {
		array[i] = distribution(generator);
	}
}
bool Sort::getIsChecked() {
	return isChecked;
}
void Sort::delete3() {
    ;
    for (int i = 0; i < length; i++) {
        if (array[i] % 3 == 0) {
            array[i] = -1;
            count++;
        }
    }
    resultArray = new int[count];
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (array[i] != -1) {
            resultArray[j] = array[i];
            j++;
        }
    }
}
void Sort::pow2() {
    for (int i = 0; i < count; i++) {
        resultArray[i] = resultArray[i] * resultArray[i];
    }
}
void Sort::isOrdered() {
    for (int i = 1; i < count; i++) {
        if (array[i - 1] > array[i]) {
            isChecked = false;
        }
     }
}
void mergeSort(System::Windows::Forms::RichTextBox^ richTextBox,int arr[], int l, int r) {
	if (l >= r) {
		return;//returns recursively
	}
	int m = (l + r - 1) / 2;
	mergeSort(richTextBox,arr, l, m);
	mergeSort(richTextBox,arr, m + 1, r);
	merge(richTextBox,arr, l, m, r);
}
void merge(System::Windows::Forms::RichTextBox^ richTextBox, int array[], int left, int middle, int right) {
    int size1 = middle - left + 1;
    int size2 = right - middle;
    int* L = new int[size1], * R = new int[size2];
    for (int i = 0; i < size1; i++) {
        L[i] = array[left + i];
    }
    for (int j = 0; j < size2; j++) {
        R[j] = array[middle + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while (i < size1 && j < size2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        }
        else {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < size1) {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < size2) {
        array[k] = R[j];
        j++;
        k++;
    }
}
