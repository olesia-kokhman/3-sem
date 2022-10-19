#include <iostream>
#include <random>
using namespace std;
int main(int argc, char* argv[]) {
    int size = atoi(argv[1]);
    random_device random_device;
    mt19937 generator(random_device());
    uniform_int_distribution<> distribution(1, 20);
    int** array = new int* [size];
    for (int i = 0; i < size; i++) {
        array[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            array[i][j] = distribution(generator);
        }
    }
    for (int j = 0; j < size; j++) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += array[i][j];
        }
        printf("sum = %d\n", sum);
    }
    return 0;
}