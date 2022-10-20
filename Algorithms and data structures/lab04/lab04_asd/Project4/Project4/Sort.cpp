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
    for (int i = this->findIndexMax() + 1; i < length; i++) {
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
    auto max = array[0];
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
    int size = right + 1;
    int pivot = (left + right) / 2;
    int i = left, j = right;
    if (i < j) {
        richTextBox->Text += "\nStep " + counter++ + ". Input array:" + "\n";
        for (int i = left; i < size; ++i) {
            richTextBox->Text += array[i].ToString("#,0.00") + " ";
        }
        richTextBox->Text += "\nNew pivot (median) = " + array[pivot].ToString("#,0.00") + "\n";
    }

    while (i <= j) {
        while (array[i] > array[pivot]) {
            i++;
        }
        while (array[j] < array[pivot]) {
            j--;
        }
        if (i < j) {
            richTextBox->Text += "Step " + counter++ + ". Swap array[" + (i - left) + "]=" + array[i].ToString("#,0.00") + " and array[" + (j - left) + "]=" + array[j].ToString("#,0.00") + "\n";
            double temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++, j--;
            richTextBox->Text += "Array after swap:" + "\n";
            for (int k = left; k < size; ++k) {
                richTextBox->Text += array[k].ToString("#,0.00") + " ";
            }
            richTextBox->Text += "\n";
        }
        else if (i == j) {
            i++, j--;
        }
        if (j > left) {
            richTextBox->Text += "Step " + counter++ + ". Split array into subarray before partitioning index: " + "\n";
            for (int k = left; k < j + 1; ++k) {
                richTextBox->Text += array[k].ToString("#,0.00") + " ";
            }
            richTextBox->Text += "\n";
            quickSort(richTextBox, array, left, j);
        }
        if (i < right) {
            richTextBox->Text += "Step " + counter++ + ". Split array into subarray after partitioning index: " + "\n";
            for (int k = i; k < right + 1; ++k) {
                richTextBox->Text += array[k].ToString("#,0.00") + " ";
            }
            richTextBox->Text += "\n";
            quickSort(richTextBox, array, i, right);
        }
    }
}


