#include <iostream>
#include <random>
#include <chrono>
#include <ctime>
#include <cstdio>
using namespace std;
void randomNumbers(int* array, int size);
void bubbleSort(int* array, int size);
void selectionSort(int* array, int size);
void shellSort(int* array, int size);
void quickSort(int* arr, int start, int end);
int partition(int* arr, int start, int end);
void merge(int* arr, int p, int q, int r);
void mergeSort(int* arr, int l, int r);
void countSort(int* array, int size);
int main() {
	//int size = 1024;
	//int size = 4096;
    //int size = 16384;
	//int size = 65536;
	//int size = 262144;
	//int size = 1048576;
	int size = 4194304;
	int* array = new int[size];
	randomNumbers(array, size);
	double start = clock();
	countSort(array, size);
    printf("%.4lf\n", (clock() - start) / CLOCKS_PER_SEC);
	getchar();
	return 0;
}
void randomNumbers(int* array, int size) {
	random_device random_device;
	mt19937 generator(random_device());
	uniform_int_distribution<int> distribution(0, 200);
	for (int i = 0; i < size; i++) {
		array[i] = distribution(generator);
	}
}
void bubbleSort(int* array, int size) {
	int length = size;
	while (length >= 0) {
		for (int i = 1; i < size; i++) {
			if (array[i - 1] > array[i]) {
				int temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
			}
		}
		length--;
	}
}
void selectionSort(int* array, int size) {
	int min = 0;
	int count = 0;
	int mainIndex = 0;
	int temp = 0;
	while (mainIndex < size) {
		min = array[mainIndex];
		count = mainIndex;
		for (int i = mainIndex; i < size; i++) {
			if (array[i] < min) {
				min = array[i];
				count = i;
			}
		}
		temp = array[mainIndex];
		array[mainIndex] = min;
		array[count] = temp;
		mainIndex++;
	}
}
void shellSort(int* array, int size) {
	for (int interval = size / 2; interval > 0; interval /= 2) {
		for (int i = interval; i < size; i += 1) {
			int temp = array[i];
			int j;
			for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
				array[j] = array[j - interval];
			}
			array[j] = temp;
		}
	}
}
int partition(int* arr, int start, int end) {
	int pivot = arr[start];
	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);
	int i = start, j = end;
	while (i < pivotIndex && j > pivotIndex) {
		while (arr[i] <= pivot) {
			i++;
		}
		while (arr[j] > pivot) {
			j--;
		}
		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}
	return pivotIndex;
}
void quickSort(int* arr, int start, int end) {
	if (start >= end)
		return;
	int p = partition(arr, start, end);
	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
}
void merge(int* arr, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	int* L = new int[n1], *M = new int[n2];
	for (int i = 0; i < n1; i++)
		L[i] = arr[p + i];
	for (int j = 0; j < n2; j++)
		M[j] = arr[q + 1 + j];
	int i, j, k;
	i = 0;
	j = 0;
	k = p;
	while (i < n1 && j < n2) {
		if (L[i] <= M[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = M[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = M[j];
		j++;
		k++;
	}
}
void mergeSort(int* arr, int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}
void countSort(int* array, int size) {
	int max = array[0];
	for (int i = 0; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	int countArraySize = max + 1;
	int* countArray = new int[countArraySize] {0};
	for (int i = 0; i < countArraySize; i++) {
		int countI = 0;
		for (int j = 0; j < size; j++) {
			if (array[j] == i) {
				countI++;
			}
		}
		countArray[i] = countI;
		countI = 0;
	}
	int* indexArray = new int[countArraySize] {0};
	indexArray[0] = countArray[0];
	for (int i = 1; i < countArraySize; i++) {
		indexArray[i] = indexArray[i - 1] + countArray[i];
	}
	int* resultArray = new int[size];
	for (int i = 0; i < size; i++) {
		int j = array[i];
		resultArray[indexArray[j] - 1] = array[i];
		indexArray[j]--;
	}
	//for (int i = 0; i < size; i++) {
	//	array[i] = resultArray[i];
	//}
}
