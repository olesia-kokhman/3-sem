#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
void search(string* array, int start, int end, char value);
int main() {
    fstream file;
    string word, filename;
    filename = "file.txt";
    file.open(filename.c_str());
    int size = 0;
    while (file >> word) {
        size++;
    }
    cout << size << endl;
    file.close();
    string* array1 = new string[size];
    file.open(filename.c_str());
    int i = 0;
    while (file >> word) {
        array1[i] = word;
        cout << array1[i] << endl;
        i++;
    }
    search(array1, 0, 10, 'P');
    return 0;
}
/*size / 16 13/4 = 3
0 3 6 9 13*/ 

void search(string* array, int start, int end, char value) {
    for (int i = start; i < end; i++) {
        if (array[i][0] == value || array[i][0] == toupper(value) || array[i][0] == tolower(value)) {
            cout << array[i] << endl;
        }
    }
}