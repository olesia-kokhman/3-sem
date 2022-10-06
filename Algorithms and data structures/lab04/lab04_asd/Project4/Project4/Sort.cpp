#include "Sort.h"
Sort::Sort() {
	length = 0;
	array = new double[length];
};
Sort::Sort(int _length) {
	length = _length;
	array = new  double[length];
}
Sort::~Sort() {
	delete[] array;
}
void Sort::randomNumbers() {
	random_device random_device;
	mt19937 generator(random_device());
	uniform_real_distribution<double> distribution(0, 200);
	for (int i = 0; i < length; i++) {
		array[i] = distribution(generator);
	}
}
void Sort::isOrdered() {
    for (int i = this->findIndexMax() + 1 ; i < length; i++) {
        if (array[i - 1] < array[i]) {
            isChecked = false;
            break;
        }
    }
}
bool Sort::getIsChecked() {
	return isChecked;
}
int Sort::findIndexMax() {
    int count = 0;
    int max = array[0];
    for (int i = 0; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
            count = i;
        }
    }
    return count;
}
int counter = 0;
void quickSort(System::Windows::Forms::RichTextBox^ richTextBox, double* array, int left, int right) {
    int pivot = (left + right) / 2;
    int i = left, j = right;
    while (i <= j) {
        while (array[i] > array[pivot]) {
            i++;
        }
        while (array[j] < array[pivot]) {
            j--;
        }
        if (i <= j) {
            double temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++, j--;
            for (int k = 0; k <= right; k++) {
                richTextBox->Text += array[k].ToString("#,0.00") + " ";
            }
            richTextBox->Text += System::Convert::ToString("-------step " + counter + " \n");
            counter++;
        }
        if (j > left) {
            quickSort(richTextBox, array, left, j);
        }
        if (i < right) {
            quickSort(richTextBox, array, i, right);
        }
    }
}

