#include <iostream>
#include <iomanip>

int main() {
    // Створення змінних.
    double initial, step;
    int rows;
    // Створення констант велечин.
    const double NM_KM = 1.852;
    const double NM_FT = 6076;
    // Введення початкових значень для перетворення.
    std::cout << "1 морська миля = 1.852 км = 6076 футів." << std::endl;
    std::cout << "Для початку перетворення введіть початкове значення (Морських миль): ";
    std::cin >> initial;
    std::cout << "Введіть крок зміни (Морських миль): ";
    std::cin >> step;
    std::cout << "Введіть кількість рядків у таблиці: ";
    std::cin >> rows;
    // Виведення заголовку таблиці
    std::cout << "Морських миль\t" << "Кілометрів\t" << "Футів" << std::endl;
   
    // Виведення рядків таблиці
    for (int i = 0; i < rows; ++i)      
    {
        double nm = initial + i * step;
        double km = nm * NM_KM;
        double ft = nm * NM_FT; 

        std::cout << std::setw(5) << nm
                  << std::setw(18) << km  
                  << std::setw(14) << ft
                  << std::endl;
    }
    return 0;
}

