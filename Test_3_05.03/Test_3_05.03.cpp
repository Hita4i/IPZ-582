#include <iostream>
using namespace std;


void summOfArray() // 2. Обчислити суму значень усіх елементів.
{
    srand(time(NULL));
    int forRand = 100;
    int const N = 5;
    int matrix[N][N];
    int counter = 0;

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            int a = 1 + rand() % forRand;
            counter += a;
            matrix[y][x] = a;
        };
    };
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    };
    cout <<"Сума значень усіх елементів: " << counter;
    cout << endl;
    cout << endl;
}

// 2. Дано масив розміром 7x2 з елементами дійсного типу. Написати
// програму для обчислення суми всіх додатних елементів масиву.
void summOfDoubleArray()
{
    srand(time(NULL));
    int const Y = 7, X = 2;
    double matrix[Y][X];
    double counter = 0.0;

    for (int y = 0; y < Y; y++)
    {

        for (int x = 0; x < X; x++)
        {
            double a = (double(rand()) / RAND_MAX) * 200 - 100;
            if (a > 0)
            {
                counter += a;
            };
            matrix[y][x] = a;
        };
    };
    for (int i = 0; i < Y; i++)
    {
        for (int j = 0; j < X; j++)
        {
            cout << matrix[i][j] << "  ";
        };
        cout << endl;
       

    };
    cout <<"Сума всіх додатніх елементів масиву: " << counter;
    cout << endl;
    cout << endl;
    
}

// Метод сортування вставкою.
// Циклом для кожного елемента починаючи з другого елемента
// Встановити значення і для index та array[i] для temp(для заміни значень через третю змінну)
// Циклом while для переміщення елементів поки index більше 0 та елемент масиву [index - 1] більший ніж значення змінної temp
// Елемент масиву [index] замінити попереднім елементом [index - 1] та зменшити індекс на одиницю
// Записати значення(темп) для якого відбувався пошук місця в комірку масиву після зменшення індексу
// Циклом вивести на екран результат сортування
void arraySort() 
{
    int const arrayLeng = 10;
    int array[arrayLeng] = { 8, 2, 4, 1, 9, 3, 6, 4, 6, 2 };
    int temp;
    int index;
    for (int i = 1; i < size(array); i++) {
        index = i;
        temp = array[i];
        while (index > 0 && array[index - 1] > temp) {
            array[index] = array[index - 1];
            index--;
        };
        array[index] = temp;
    };
    for (int i = 0; i < size(array); i++)
    {
        cout << array[i] <<" ";
    };
    cout << endl;
    cout << endl;
}



int main()
{   
    arraySort();
    
    summOfArray();
    
    summOfDoubleArray();
    return 0;
}