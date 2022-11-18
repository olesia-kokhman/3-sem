#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Функция для реализации алгоритма KMP
void KMP(string text, string pattern) {
    int m = text.length();
    int n = pattern.length();
    // если шаблон это пустая строка
    if (n == 0) {
        cout << "The pattern occurs with shift 0";
        return;
    }
    // если длина текста меньше длины шаблона
    if (m < n) {
        cout << "Pattern not found";
        return;
    }
    // next[i] сохраняет индекс следующего лучшего частичного совпадения
    int* next = new int[n + 1];
    for (int i = 0; i < n + 1; i++) {
        next[i] = 0;
    }
    for (int i = 1; i < n; i++) {
        int j = next[i + 1];
        while (j > 0 && pattern[j] != pattern[i]) {
            j = next[j];
        }

        if (j > 0 || pattern[j] == pattern[i]) {
            next[i + 1] = j + 1;
        }
    }
    cout << "next array:" << endl;
    for (int i = 0; i < n + 1; i++) {
        cout << next[i] << " ";
    }
    for (int i = 0, j = 0; i < m; i++) {
        if (text[i] == pattern[j]) {
            cout << "text[" << i << "] ( " << text[i] << ") == pattern[" << j << "] (" << pattern[j] << ")" << endl;
            if (++j == n) {
                cout << "The pattern occurs with shift " << i - j + 1 << endl;
            }
        }
        else if (j > 0) {
            cout << "j = " << j << " i = " << i << endl;
            j = next[j];
            i--;    // так как `i` будет увеличен на следующей итерации
            cout << "j = " << j << " i = " << i << endl;
        }
    }
}
// Программа для реализации алгоритма KMP на C++
string search(string text) {
    int size = text.length();
    char* char_array = new char[size + 1];
    char* char_array2 = new char[size + 1];
    strcpy(char_array,text.c_str());
    strcpy(char_array2, text.c_str());
    char* token;
    int arraySize = 0;
    token = strtok(char_array, " ");
    while (token != NULL) {
        token = strtok(NULL, " ");
        arraySize++;
    }
    string* array = new string[arraySize];
    char* token2;
    token2 = strtok(char_array2, " ");
    int i = 0;
    while (token2 != NULL) {
        array[i] = token2;
        token2 = strtok(NULL, " ");
        i++;
    }
    int max = array[0].length();
    int index = 0;
    for (int i = 0; i < arraySize; i++) {
        if (max < array[i].length()) {
            max = array[i].length();
            index = i;
        }
    }
    return array[index];
}
int main() {
    string text = "And involving the antiemotion in these anticipations thesethesethese could have been a smart idea";
    string pattern = search(text);
    //KMP(text, pattern);
    string text2 = "And involving the antiemotion anticipation anticipations sin these could thesethesethese have been a smart idea";
    KMP(text2, pattern);
    return 0;
}

