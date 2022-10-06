#include <iostream>
using namespace std;
void quickSort(int* array, int left, int right);
int main() {
    int size = 10;
    int* array = new int[size] { 1, 5, 4, 3, 10, 6, 8, 5, 4, 2 };
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    quickSort(array, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
	return 0;
}
void quickSort(int* array, int left, int right) {
    int pivot = (left + right) / 2;
    int i = left, j = right;
    while (i <= j) {
        while (array[i] < array[pivot]) {
            i++;
        }
        while (array[j] > array[pivot]) {
            j--;
        }
        if (i <= j) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++, j--;

        }
        if (j > left) {
            quickSort( array, left, j);
        }
        if (i < right) {
            quickSort( array, i, right);
        }
    }
}
