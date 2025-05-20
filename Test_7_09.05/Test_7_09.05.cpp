#include <iostream>

using namespace std;

/*  1) Організувати безперервне введення чисел з клавіатури, поки
    користувач не вводить 0. після вводу 0, вивести на екран кількість чисел, їх
    загальну суму, середнє арифметичне.*/
void averageValue()
{
    int a;
    static int b = 0;
    static float counter = 0;
    cout << "Enter you number: ";
    cin >> a;
    
    if (a != 0) {
        b += a;
        counter++;
        averageValue();
    }
    else
    {
        if (counter > 0) {
            cout << "Average value is " << b / counter;
            cout << endl;
        }
        if (counter == 0) {
            cout << "Error: division by zero";
            cout << endl;
        }
    }
}
/*  5) Створити програму, яка знаходить суму всіх непарних чисел, в
    діапазоні, який користувач введе з клавіатури.*/
int recursiveSumOfRange(int start, int stop)
{
    static int counter = 0;
    if (start < stop)
    {
        if (start % 2 != 0) {
            counter += start;
            recursiveSumOfRange(start += 1, stop);
        }
        else
        {
            recursiveSumOfRange(start += 1, stop);
        }
    }
    return counter;
}

int main()
{
    averageValue();

    int startRange;
    int stopRange;
    cout << "Введіть початок діапазону: ";
    cin >> startRange;
    cout << "Введіть кінець діапазону: ";
    cin >> stopRange;

    cout << "Сума всіх непарних чисел діапазону " << recursiveSumOfRange(startRange, stopRange);
    return 0;
}