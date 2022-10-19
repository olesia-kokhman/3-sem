#include "SomeArray.h"
int main() {
	int size = 10;
	int* array = new int[size] {1, 2, 5, 4, 3, 6, 7, 8, 5, 4};
	SomeArray<int> object(array, size);
	object.printArray();
	return 0;
}