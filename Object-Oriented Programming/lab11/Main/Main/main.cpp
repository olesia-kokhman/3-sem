#include <iostream>
#include <stack>
#include <random>
#include <algorithm>
#include <queue>
using namespace std;
void printStack(stack<float> object, string name);
void printQueue(queue<float> object);
int main() {
	stack<float> first;
	int size = 0;
	cout << "enter size:" << endl;
	cin >> size;
	random_device random_device;
	mt19937 generator(random_device());
	uniform_real_distribution<> distribution(1, 20);
	while (first.size() < size) {
		first.push(distribution(generator));
	}
	printStack(first, "first stack");
	//////////////
	int count = first.size() / 2;
	while (first.size() > count) {
		first.pop();
	}

	float length = first.size();
	float* array = new float[length];
	for (int i = 0; i < length; i++) {
		array[i] = first.top() + 1;
		first.pop();
	}
	for (int i = length - 1; i >= 0; i--) {
		first.push(array[i]);
	}
	printStack(first, "first stack");

	stack<float> second;
	while (second.size() < size) {
		second.push(distribution(generator));
	}
	printStack(second, "second stack");

	int count2 = first.size() / 2;
	int count3 = first.size() - count2;
	float* array2 = new float[count3];
	for (int i = 0; i < count2; i++) {
		first.pop();
	}
	for (int i = 0; i < count3; i++) {
		array2[i] = first.top();
		first.pop();
	}
	for (int i = count3 -1; i >= 0 ; i--) {
		first.push(array2[i]);
	}
	printStack(first, "first stack");

	float* array3 = new float[size];
	for (int i = 0; i < size; i++) {
		array3[i] = second.top();
		second.pop();
	}
	for (int i = size - 1; i >= 0; i--) {
		second.push(array3[i]);
		first.push(array3[i]);
	}
	printStack(first, "first stack");
	printStack(second, "second stack");

	int length2 = first.size();
	float* array4 = new float[length2];
	for (int i = 0; i < length2; i++) {
		array4[i] = first.top();
		first.pop();
	}
	
	sort(array4, array4 + length2);
	for (int i = length2 - 1; i >= 0; i--) {
		first.push(array4[i]);
	}
	printStack(first, "first stack");

	cout << "min = " << first.top() << endl;

	float* array5 = new float[length2];
	for (int i = 0; i < length2; i++) {
		array5[i] = first.top();
		first.pop();
	}
	for (int i = length2 - 1; i >= 0; i--) {
		first.push(array5[i]);
	}

	queue<float> object;
	for (int i = 0; i < length2; i++) {
		if (array5[i] > 5 && array5[i] < 15) {
			object.push(array5[i]);
		}
	}
	printQueue(object);

	while (!first.empty()) {
		first.pop();
	}
	for (int i = 0; i < length2; i++) {
		first.push(array4[i]);
	}
	printStack(first, "sorted first stack");

	int length3 = object.size();
	float* array6 = new float[length3];
	for (int i = 0; i < length3; i++) {
		array6[i] = object.front();
		object.pop();
	}
	sort(array6, array6 + length3);
	for (int i = 0; i < length3; i++) {
		object.push(array6[i]);
	}
	printQueue(object);

	queue<float> merged;
	while (!first.empty()) {
		merged.push(first.top());
		first.pop();
	}
	while (!object.empty()) {
		merged.push(object.front());
		object.pop();
	}
	printQueue(merged);
	
	int counter = 0;
	while (!merged.empty()) {
		if (merged.front() > 5 && merged.front() < 15) {
			counter++;
		}
		merged.pop();
	}
	cout << "\ncounter = " << counter << endl;
}
void printStack(stack<float> object, string name) {
	cout << "\n" << name << ":" << endl;
	while(!object.empty()) {
		cout << object.top() << " ";
		object.pop();
	}
}
void printQueue(queue<float> object) {
	cout << "\n" << "queue:" << endl;
	while (!object.empty()) {
		cout << object.front() << " ";
		object.pop();
	}
}
