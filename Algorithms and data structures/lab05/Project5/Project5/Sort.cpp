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
    uniform_int_distribution<> distribution(1, 20);
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
    resultArray = new int[length - count];
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (array[i] != -1) {
            resultArray[j] = array[i];
            j++;
        }
    }
}
void Sort::pow2() {
    for (int i = 0; i < length - count; i++) {
        resultArray[i] = resultArray[i] * resultArray[i];
    }
}
void Sort::isOrdered() {
    for (int i = 1; i < length - count; i++) {
        if (resultArray[i - 1] > resultArray[i]) {
            isChecked = false;
        }
    }
}
int step = 1;
void mergeSort(System::Windows::Forms::RichTextBox^ richTextBox, int arr[], int l, int r) {
    if (l >= r) {
        return;//returns recursively
    }
    int m = l + (r - l) / 2;
    richTextBox->Text += "Step " + step + ". Split the following array into 2 subarrays:" + "\n";
    for (int i = l; i < r + 1; i++) {
        richTextBox->Text += arr[i];
        richTextBox->Text += " ";
    }
    richTextBox->Text += "\n";
    richTextBox->Text += "The first subarray:\n";
    for (int i = l; i < m + 1; i++) {
        richTextBox->Text += arr[i];
        richTextBox->Text += " ";
    }
    richTextBox->Text += "\n" + "The second subarray:" + ":\n";
    for (int i = m + 1; i < r + 1; i++) {
        richTextBox->Text += arr[i];
        richTextBox->Text += " ";
    }
    richTextBox->Text += "\n";
    step++;
    mergeSort(richTextBox, arr, l, m);
    mergeSort(richTextBox, arr, m + 1, r);
    merge(richTextBox, arr, l, m, r);
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
    richTextBox->Text += "Step " + step + ". Merge 2 subarrays. The first subarray:" + ":\n";
    printArray(richTextBox, L, size1);
    richTextBox->Text += "The second subarray:" + "\n";
    printArray(richTextBox, R, size2);
    richTextBox->Text += "Merge result:\n";
    for (int i = left; i < right + 1; i++) {
        richTextBox->Text += array[i];
        richTextBox->Text += " ";
    }
    richTextBox->Text += "\n";
    step++;
}
void printArray(System::Windows::Forms::RichTextBox^ richTextBox, int array[], int length) {
    for (int i = 0; i < length; i++) {
        richTextBox->Text += array[i];
        richTextBox->Text += " ";
    }
    richTextBox->Text += "\n";
}

