#include "Sort.h"
Sort::Sort() {
    length = 0;
    array = new string[length];
    citiesLength = 19;
    cities = new string[citiesLength];
};
Sort::Sort(int _length) {
    length = _length;
    array = new string[length];
    citiesLength = 19;
    cities = new string[citiesLength];
}
Sort::~Sort() {
    delete[] array;
    delete[] cities;
}
void Sort::randomNumbers() {
    random_device random_device;
    mt19937 generator(random_device());
    uniform_int_distribution<> distribution(0, 18);     
    int index;
    for (int i = 0; i < length; i++) {
        index = distribution(generator);
        array[i] = cities[index];
    }
}
void Sort::initCities() {
    string path = "cities.txt";
    ifstream file;
    file.open(path);
    if (!file.is_open()) {
        return;
    }
    int i = 0;
    while (!file.eof() && i < citiesLength) {
        getline(file, cities[i]);
        i++;
    }
    file.close();
}
void Sort::deleteLongCities() {
	for (int i = 0; i < length; i++) {
		if (array[i].length() <= 8) {
			mainLength++;
		}
	}
	mainArray = new string[mainLength];
	int index = 0;
	for (int i = 0; i < length; i++) {
		if (array[i].length() <= 8) {
		mainArray[index] = array[i];
		index++;
		}
	}
} 
string Sort::getElement(int index) {
    return array[index];
}
int Sort::getSize() {
    return length;
}
bool Sort::getChecked() {
    return isChecked;
}
void Sort::isOrdered() {}
void Sort::stringCountingSort(System::Windows::Forms::RichTextBox^ richTextBox) {
	int countArraySize = 26;
	int* countArray = new int[countArraySize] {0};
	for (int i = 0; i < countArraySize; i++) {
		int countI = 0;
		for (int j = 0; j < mainLength; j++) {
			if (convertCharToInt(mainArray[j].at(0)) == i) {
				countI++;
			}
		}
		countArray[i] = countI;
	}
	int* indexArray = new int[countArraySize] {0};
	indexArray[0] = countArray[0];
	for (int i = 1; i < countArraySize; i++) {
		indexArray[i] = indexArray[i - 1] + countArray[i];
	}
	string* resultArray = new string[mainLength]{};
	for (int i = 0; i < mainLength; i++) {
		resultArray[i] = "0";
	}
	int step = 0;
	for (int i = 0; i < mainLength; i++) {
		int j = convertCharToInt(mainArray[i].at(0));
		resultArray[indexArray[j] - 1] = mainArray[i];
		
		System::String^ element = gcnew System::String(mainArray[i].c_str());
		richTextBox->Text += "Step " + step + ": adding " + element + " on position " + (indexArray[j] - 1) + "\n";
		step++;
		for (int k = 0; k < mainLength; k++) {
			System::String^ str = gcnew System::String(resultArray[k].c_str());
			richTextBox->Text += str + " ";
		}
		richTextBox->Text += "\n";
		indexArray[j]--;
	}
	for (int i = 0; i < mainLength; i++) {
		mainArray[i] = resultArray[i];
	}
	richTextBox->Text += "\nFinal sorted array:\n";
	for (int i = 0; i < mainLength; i++) {
		System::String^ str = gcnew System::String(mainArray[i].c_str());
		richTextBox->Text += str + " ";
	}
}
int Sort::convertCharToInt(char value) {
	int size = 26;
	char* symbols = new char[size] { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	for (int i = 0; i < size; i++) {
		if ((symbols[i]) == value || toupper(symbols[i]) == value) {
			return i;
		}
	}
	return -1;
}
