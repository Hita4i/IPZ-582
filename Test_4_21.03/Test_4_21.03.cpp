#include <iostream>
using namespace std;
// Ввести довільний текст. У даному тексті знищити всі символи «,» і
// підрахувати довжину утвореного тексту.

int main()
{
    char SYMBOL = ',';
    char str[] = ",Hel,lo, world,!";
    char resoltStr[100];
    int index = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != SYMBOL) {
            resoltStr[index] = str[i];
            index++;
        };
        resoltStr[index] = '\0';
    };
    cout << "Початковий текст: " << str << endl;
    cout << "Довжина тексту: "<<strlen(str) << endl;
    cout << "Утворений текст: " << resoltStr << endl;
    cout << "Довжина утвореного тексту: " << strlen(resoltStr) << endl;
    return 0;
}