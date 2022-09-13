#include "Sort.h"
Sort::Sort() : rows(0), columns(0) {
	array = new double*[rows];
	for (int i = 0; i < rows; i++) {
		array[i] = new double[columns];
	}
}
Sort::Sort(int _rows, int _columns) {
	rows = _rows;
	columns = _columns;
	array = new double*[rows];
	for (int i = 0; i < rows; i++) {
		array[i] = new double[columns];
	}
}
Sort::~Sort() {
	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;
}
void Sort::randomNumbers() {
	random_device random_device;
	mt19937 generator(random_device());
	uniform_real_distribution<double> distribution(0, 200);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			array[i][j] = distribution(generator);
		}
	}
}
void Sort::changeMaxes() {
	int i = 0;
	double max = 0;
	int j = 0;
	int countJ = 0;
	while (i < rows) {
		max = array[i][j];
		for (j = 0; j < columns; j++) {
			if (array[i][j] > max) {
				max = array[i][j];
				countJ = j;
			}
		}
		array[i][countJ] = pow(array[i][countJ], 1.0 / 9);
		i++;
	}
}
bool Sort::getChecked() {
	return isChecked;
}
void operator<<(System::Windows::Forms::RichTextBox^ richTextBox, Sort* sort) {
	for (int i = 0; i < sort->rows; i++) {
		for (int j = 0; j < sort->columns; j++) {
			richTextBox->Text += sort->array[i][j].ToString("#,0.00") + " ";
		}
		richTextBox->Text += "\n";
	}
	richTextBox->Text += System::Convert::ToString("-------step " + sort->counter + " \n");
	sort->increaseCounter();
}
void Sort::shellSort(System::Windows::Forms::RichTextBox^ richTextBox) {
	int col = 0;
	double temp = 0;
	for (int gap = rows / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < rows; i++) {
			int j;
			for (int j = i; j >= gap; j = j - gap) {
				if (array[j - gap][col] > array[j][col]) {
					while (col < columns) {
						temp = array[j][col];
						array[j][col] = array[j - gap][col];
						array[j - gap][col] = temp;
						col++;
					}
				}
				col = 0;
				richTextBox << this;
			}
		}
	}
}
void Sort::increaseCounter() {
	counter++;
}
int Sort::getRows() {
	return rows;
}
int Sort::getColumns() {
	return columns;
}
void Sort::isOrdered() {
	int col = 0;
	for (int i = 0; i + 1 < rows; i++) {
		if (array[i][col] > array[i + 1][col]) {
			isChecked = false;
			return;
		}
	}
	isChecked = true;
}