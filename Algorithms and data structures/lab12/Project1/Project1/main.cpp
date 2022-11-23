//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#include <iostream>
//using namespace std;
//int BMSearch(char* string, const char* substring) {
//    int  stringLength = 0;
//    int substringLength = 0;
//    int result = -1;
//    while (string[stringLength] != NULL) {
//        stringLength++;
//    }
//    while (substring[substringLength] != NULL) {
//        substringLength++;
//    }
//    if (stringLength == 0) {
//        printf("error\n");
//    }
//    else if (substringLength == 0) {
//        printf("error\n");
//    }
//    else {
//        int  i, position;
//        int  BMT[256];
//        for (i = 0; i < 256; i++) {
//            BMT[i] = substringLength;
//        }
//        for (i = substringLength - 1; i >= 0; i--) {
//            if (BMT[(short)(substring[i])] == substringLength) {
//                BMT[(short)(substring[i])] = substringLength - i - 1;
//            }
//        }
//        position = substringLength - 1;
//        while (position < stringLength)
//            if (substring[substringLength - 1] != string[position]) {
//                cout << "position - " << position << endl;
//                position = position + BMT[(short)(string[position])];
//                cout << "new position - " << position << endl;
//            }
//            else
//                for (i = substringLength - 2; i >= 0; i--) {
//                    if (substring[i] != string[position - substringLength + i + 1]) {
//                        cout << "position " << position << ": " << substring[i] << " != " << string[position - substringLength + i + 1] << endl;
//                        position += BMT[(short)(string[position - substringLength + i + 1])] - 1;
//                        cout << "new position - " << position << endl;
//                        break;
//                    }
//                    else
//                        if (i == 0)
//                            return position - substringLength + 1;
//                }
//    }
//    printf("\n");
//    return result;
//}
//string mySearch(string text) {
//    char vowels[] = { 'a', 'o', 'i', 'e', 'u', 'y'};
//    int size = text.length();
//    char* char_array = new char[size + 1];
//    char* char_array2 = new char[size + 1];
//    strcpy(char_array, text.c_str());
//    strcpy(char_array2, text.c_str());
//    char* token;
//    int arraySize = 0;
//    token = strtok(char_array, " ");
//    while (token != NULL) {
//        token = strtok(NULL, " ");
//        arraySize++;
//    }
//    string* array = new string[arraySize];
//    char* token2;
//    token2 = strtok(char_array2, " ");
//    int i = 0;
//    while (token2 != NULL) {
//        array[i] = token2;
//        token2 = strtok(NULL, " ");
//        i++;
//    }
//    int count = 0;
//    int min = 10;
//    string minS = "initial";
//    for (int i = 0; i < arraySize; i++) {
//        int length = array[i].length();
//        for (int j = 0; j < length; j++) {
//            for (int t = 0; t < 6; t++) {
//                if (array[i][j] == vowels[t]) {
//                    count++;
//                }
//            }
//           
//        }
//        if (count < min && count != 0) {
//            min = count;
//            minS = array[i];
//        }
//        count = 0;
//    }
//    return minS;
//}
//int main(int argc, char* argv[]) {
//    char str[] = "Enforcement only partially law understood wal lws enactment laws swal regulations. Instead examine power-infused, dynamic assemblages";
//    char substr[] = "laws";
//    int i;
//    string s = "";
//    for (i = 0; i < 130; i++) {
//        s = s + str[i];
//    }
//    string my = mySearch(s);
//    cout << my << endl;
//    int length = my.length();
//    string myNew = "";
//    for (int i = length - 1; i >=0; i--) {
//        myNew += my[i];
//    }
//    cout << myNew << endl;
//    const char* result = new char[length];
//    result = myNew.c_str();
//    int pos = BMSearch(str, result);
//    printf("shift = % d", pos);
//    getchar();
//    return 0;
//}