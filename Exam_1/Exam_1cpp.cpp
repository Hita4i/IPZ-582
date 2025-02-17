#include <iostream>
// Вивести добуток номерів двох найменших елементів серед додатних.
int main()
{
    int array[10] = { 3, 31, 11, 51, 40, 20, 3, 51, 44, 10 };
    
    // Знаходження найбільшого елемента для виконання подальших обчислень.
    int first_min_el = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > first_min_el)
        {
            first_min_el = array[i];
        }
    }
    int for_second_min_el = first_min_el;

    // Знаходження першого найменшого елементу в масиві.
    int index_of_first_el;
    for (int i = 0; i < 10; i++)
    {   
        if (array[i] < first_min_el)
        {
            first_min_el = array[i];
            index_of_first_el = i;
        }
    }

    // Знаходження другого найменшого елементу в масиві.
    int index_of_second_el;
    for (int i = 0; i < 10; i++)
    {   
        if(i == index_of_first_el)
        {
            continue;
        }
        if (array[i] < for_second_min_el)
        {
            for_second_min_el = array[i];
            index_of_second_el = i;
        }
    }
    std::cout << "Index of first min element = " << index_of_first_el << std::endl;
    std::cout << "Index of second min element = " << index_of_second_el << std::endl;
    std::cout << "Summ of index min elements = " << index_of_first_el + index_of_second_el << std::endl;
	return 0;
}