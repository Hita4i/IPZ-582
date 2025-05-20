#include <iostream>
//#include <string.h>
using namespace std;

char indexFinderAndEncoding(char chr) {
    char eng[] = "abcdefghijklmnopqrstuvwxyz";
    rsize_t engLength = strlen(eng);
    for (int i = 0; i < engLength; i++) {
        if (eng[i] == chr) {
            int encodingChar = (i + 3) % engLength;
            return eng[encodingChar];
        }
        else {
            continue;
        }
    }
    return chr;
}
char indexFinderAndDecoding(char chr) {
    char eng[] = "abcdefghijklmnopqrstuvwxyz";
    rsize_t engLength = strlen(eng);
    for (int i = 0; i < engLength; i++) {
        if (eng[i] == chr) {
            int decodingChar = (i - 3 + engLength) % engLength;
            return eng[decodingChar];
        }
        else {
            continue;
        }
    }
    return chr;
}

char* encoding(char* str) {
    rsize_t strLength = strlen(str);
    char* encodingStr = new char[strLength + 1];
    int encodingStrPosition = 0;
    for (int i = 0; i < strLength; i++) {
        if (islower(str[i])) {
            char encodingChar = indexFinderAndEncoding(str[i]);
            encodingStr[encodingStrPosition++] = encodingChar;
        }
        else if (isupper(str[i])) {
            char encodingChar = toupper(indexFinderAndEncoding(tolower(str[i])));
            encodingStr[encodingStrPosition++] = encodingChar;
        }
        else if (!isalpha(str[i])) {
            encodingStr[encodingStrPosition++] = str[i];
        }
    }
    encodingStr[encodingStrPosition] = '\0';
    return encodingStr;
}

char* decoding(char* str) {
    rsize_t strLength = strlen(str);
    char* encodingStr = new char[strLength + 1];
    int encodingStrPosition = 0;
    for (int i = 0; i < strLength; i++) {
        if (islower(str[i])) {
            char encodingChar = indexFinderAndDecoding(str[i]);
            encodingStr[encodingStrPosition++] = encodingChar;
        }
        else if (isupper(str[i])) {
            char encodingChar = toupper(indexFinderAndDecoding(tolower(str[i])));
            encodingStr[encodingStrPosition++] = encodingChar;
        }
        else if (!isalpha(str[i])) {
            encodingStr[encodingStrPosition++] = str[i];
        }
    }
    encodingStr[encodingStrPosition] = '\0';
    return encodingStr;
}

void printText(char* someText) {
    rsize_t strLength = strlen(someText);
    for (int i = 0; i < strLength; i++) {
        cout << someText[i];
    }
    cout << endl;
}

int main()
{
    //char inputStr[] = "Hello world!";
    char inputStr[] = "William Shakespeare was an English poet," 
        "playwright and actor.He was born in 1564 in Stratford -"
        "upon - Avon.His father, John Shakespeare, was a successful"
        "artisan.William was the third child in the family.His parents"
        "had eight children in total.William Shakespeare went to Stratford grammar school.";
    char* encodedStr = encoding(inputStr);

    printText(inputStr);
    printText(encodedStr);

    char* decodedStr = decoding(encodedStr);
    printText(decodedStr);

    return 0;
}