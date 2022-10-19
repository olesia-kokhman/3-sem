#include <iostream>
#include <random> 
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
void randomNumbers(int* array, int size);
void countingSort(int* array, int size);
void printArray(int* array, int size);
void printArray(string* array, int size);
void initCities(string* array, int size);
void stringCountingSort(string* array, int size);
int convertCharToInt(char value);
int main() {
	int size = 10;
	string* array = new string[size];
	initCities(array, size);
	printArray(array, size);
	stringCountingSort(array, size);
	return 0;
}
void randomNumbers(int* array, int size) {
	random_device random_device;
	mt19937 generator(random_device());
	uniform_int_distribution<> distribution(1, 20);
	for (int i = 0; i < size; i++) {
		array[i] = distribution(generator);
	}
}
void countingSort(int* array, int size) {
	int max = array[0];
	for (int i = 0; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	cout << "\nmax = " << max << endl;
	int countArraySize = max + 1;
	cout << "\ncountArraySize = " << countArraySize << endl;
	int* countArray = new int[countArraySize]{0};
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
	printArray(countArray, countArraySize);
	int* indexArray = new int[countArraySize]{0};
	indexArray[0] = countArray[0];
	for (int i = 1; i < countArraySize; i++) {
		indexArray[i] = indexArray[i - 1] + countArray[i];
	}
	printArray(indexArray, countArraySize);
	int* resultArray = new int[size];
	for (int i = 0; i < size; i++) {
		int j = array[i];
		resultArray[indexArray[j] - 1] = array[i];
		indexArray[j]--;
	}
	printArray(resultArray, size);
	for (int i = 0; i < size; i++) {
		array[i] = resultArray[i];
	}
}
void stringCountingSort(string* array, int size) {
	int countArraySize = 26;
	int* countArray = new int[countArraySize] {0};
	for (int i = 0; i < countArraySize; i++) {
		int countI = 0;
		for (int j = 0; j < size; j++) {
			if (convertCharToInt(array[j].at(0)) == i) {
				countI++;
			}
		}
		countArray[i] = countI;
	}
	printArray(countArray, countArraySize);
	int* indexArray = new int[countArraySize] {0};
	indexArray[0] = countArray[0];
	for (int i = 1; i < countArraySize; i++) {
		indexArray[i] = indexArray[i - 1] + countArray[i];
	}
	printArray(indexArray, countArraySize);
	string* resultArray = new string[size];
	for (int i = 0; i < size; i++) {
		int j = convertCharToInt(array[i].at(0));
		resultArray[indexArray[j] - 1] = array[i];
		indexArray[j]--;
	}
	printArray(resultArray, size);
	for (int i = 0; i < size; i++) {
		array[i] = resultArray[i];
	}
}
int convertCharToInt(char value) {
	int size = 26;
	char* symbols = new char[size]{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	for (int i = 0; i < size; i++) {
		if ((symbols[i]) == value || toupper(symbols[i]) == value) {
			return i;
		}
	}
	return -1;
}
void printArray(int* array, int size) {
	cout << "\n";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << "\n";
}
void printArray(string* array, int size) {
	cout << "\n";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << "\n";
}
void initCities(string* array, int size) {
	string path = "cities.txt";
	ifstream file;
	file.open(path);
	if (!file.is_open()) {
		return;
	}
	int i = 0;
	string* cities = new string[19];
	while (!file.eof() && i < 19) {
		getline(file, cities[i]);
		i++;
	}
	file.close();
	random_device random_device;
	mt19937 generator(random_device());
	uniform_int_distribution<> distribution(1, 19);
	int index;
	for (int i = 0; i < size; i++) {
		index = distribution(generator);
		array[i] = cities[index];
	}
}