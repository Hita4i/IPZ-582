#include <iostream>
#include <string>
using namespace std;

void bracketsTester() {
    string message;
    cout << "Enter message: ";
    int OpenBracketCounter = 0;
    int CloseBracketCounter = 0;
    getline(cin, message);
    for (int i = 0; i < message.length(); i++) {
        if (message[i] == '(') {
            OpenBracketCounter++;
        }
        if (message[i] == ')') {
            CloseBracketCounter++;
        }
        else
        {
            continue;
        }
    }
    if (OpenBracketCounter == 0 && CloseBracketCounter == 0) {
        cout << "Без дужок";
    }
    else if (OpenBracketCounter == CloseBracketCounter) {
        cout << "правильно";
    }
    else
    {
        cout << "неправильно";
    }
}

int main()
{
    bracketsTester();

    return 0;
}