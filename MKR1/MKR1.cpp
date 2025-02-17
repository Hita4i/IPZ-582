#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Ukrainian");
    // Старі ціни на два товари
    double ogirok = 50;
    double tomat = 40;
    // Відсоток підвищення ціни
    double r;   
    std::cout << "Введіть відсоток підвищення ціни (r): ";
    std::cin >> r;

    // Обчислення нових цін
    double newPriceOgirok = ogirok * (1 + r / 100);
    double newPriceTomat = tomat * (1 + r / 100);

    // Вивід старих і нових цін на екран
    std::cout << "Стара ціна першого товару: " << ogirok << std::endl;
    std::cout << "Нова ціна першого товару: " << newPriceOgirok << std::endl;
    std::cout << "Стара ціна другого товару: " << tomat << std::endl;
    std::cout << "Нова ціна другого товару: " << newPriceTomat << std::endl;

    return 0;
}