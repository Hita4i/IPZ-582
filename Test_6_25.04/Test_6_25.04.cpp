#include <iostream>
using namespace std;

// Створити програму, яка знаходить суму всіх непарних чисел, в
// діапазоні, який користувач введе з клавіатури.
void sumOfRange(int start, int stop)
{
    int counter = 0;
    for (int i = start; i < stop; i++)
    {
        if (i % 2 != 0) {
            counter += i;
        }
    }
    cout << endl;
    cout << "Сума всіх непарних чисел діапазону " << start << " - " << stop <<" дорівнює " << counter;
    cout << endl;
}
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
    int startRange;
    int stopRange;
    cout << "Введіть початок діапазрну: ";
    cin >> startRange;
    cout << "Введіть кінець діапазрну: ";
    cin >> stopRange;

    sumOfRange(startRange, stopRange);
    cout << recursiveSumOfRange(startRange, stopRange);
    return 0;
}