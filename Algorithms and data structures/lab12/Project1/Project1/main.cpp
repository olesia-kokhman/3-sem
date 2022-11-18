#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;
int BMSearch(char* string, char* substring) {
    int  stringLength = 0;
    int substringLength = 0;
    int result = -1;
    while (string[stringLength] != NULL) {
        stringLength++;
    }
    while (substring[substringLength] != NULL) {
        substringLength++;
    }
    if (stringLength == 0) {
        printf("error\n");
    }
    else if (substringLength == 0) {
        printf("error\n");
    }
    else {
        int  i, position;
        int  BMT[256];
        for (i = 0; i < 256; i++) {
            BMT[i] = substringLength;
        }
        for (i = substringLength - 1; i >= 0; i--) {
            if (BMT[(short)(substring[i])] == substringLength) {
                BMT[(short)(substring[i])] = substringLength - i - 1;
            }
        }
        position = substringLength - 1;
        while (position < stringLength)
            if (substring[substringLength - 1] != string[position])
                position = position + BMT[(short)(string[position])];
            else
                for (i = substringLength - 2; i >= 0; i--) {
                    if (substring[i] != string[position - substringLength + i + 1]) {
                        position += BMT[(short)(string[position - substringLength + i + 1])] - 1;
                        break;
                    }
                    else
                        if (i == 0)
                            return position - substringLength + 1;
                }
    }
    printf("\n");
    return result;
}
string mySearch(string text) {
    char vowels[] = { 'a', 'o', 'i', 'e', 'u' };
    int size = text.length();
    char* char_array = new char[size + 1];
    char* char_array2 = new char[size + 1];
    strcpy(char_array, text.c_str());
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
    int count = 0;
    int min = 0;
    string minS;
    for (int i = 0; i < arraySize; i++) {
        int length = array[i].length();
        for (int j = 0; j < length; j++) {
            for (int t = 0; t < 5; t++) {
                if (array[i][j] == vowels[t]) {
                    count++;
                }
            }
            if (count < min) {
                min = count;
                minS = array[i][j];
            }
            count = 0;
        }
    }
    return minS;
}
int main(int argc, char* argv[]) {
    char str[] = "Enforcement only partially law understood lws enactment laws swal regulations. Instead examine power-infused, dynamic assemblages";
    char substr[] = "laws";
    int i;
    string s = "";
    for (i = 0; i < 130; i++) {
        s = s + str[i];
    }
    string my = mySearch(s);
    cout << my << endl;

    int pos = BMSearch(str, substr);
    printf("shift = % d", pos);
    getchar();
    return 0;
}