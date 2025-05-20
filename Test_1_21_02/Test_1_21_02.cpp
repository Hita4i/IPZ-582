#include <iostream>
//#include <ctime/*>

int main()
{
    srand(time(NULL));
    const int k = 6;
    const int candidate = 5;
    int numberOfVotes = 10 * 2 + 50 + 1;
    int arr[k][candidate];
    int candidateList[candidate] = { 1, 2, 3, 4, 5 };
    int bigger[k] = {0};
    // Виведення заголовка
    std::cout << "Candidate :\t  ";
    for (int i = 0; i < candidate; i++)
    {
        std::cout<< candidateList[i] << "\t\t ";
    };
    std::cout << std::endl << std::endl;
    // Генерація голосів і підрахунок
    for (int i = 0; i < k; i++)
    {
        int count = 0; // сума голосів у місті
        std::cout << "City " << i + 1<< "\t  :\t  ";

        for (int y = 0; y < candidate; y++)
        {
            int a = rand() % numberOfVotes;
            arr[i][y] = a;
            std::cout << arr[i][y] << "\t\t";
            count += a;
            //Перевірка суми
            if (count >= 150)
            {
                bigger[i] = i + 1;
            }
            else
            {
                bigger[i] = 0;
            };

        };
        count = 0;
        std::cout << std::endl;

    };
    // Виведення міст в яких голосів більше ніж 150
    for (int i = 0; i < k; i++) {
        if (bigger[i] != 0) 
        {
            std::cout << "In city #" << bigger[i]<< " votes count bigger of 150" << std::endl;
        }
        else {
            continue;
        };
    };
    return 0;
}