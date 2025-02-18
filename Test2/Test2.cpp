﻿#include <iostream>
#include <Windows.h>

//Варіант No2.
//1.1.Необхідно знайти, площа якого прямокутника більша, якщо прямокутники задані своїми
//сторонами
//a1 b1,
//a2 b2,
//та
//a4 b4.

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Ukrainian");

    float a1, a2, a4, b1, b2, b4, s1, s2, s4;

    //Введення та обчислення першого прямокутника
    std::cout << "Ведіть значення a1 сторони першого прямокутника\n";
    std::cin >> a1;
    std::cout << "Ведіть значення b1 сторони першого прямокутника\n";
    std::cin >> b1;
    s1 = a1 * b1;
    std::cout << a1 << " * " << b1 << " Площа першого прямокутника дорівнює " << s1 << std::endl;
    //Введення та обчислення другого прямокутника
    std::cout << "Ведіть значення a2 сторони другого прямокутника\n";
    std::cin >> a2;
    std::cout << "Ведіть значення b2 сторони другого прямокутника\n";
    std::cin >> b2;
    s2 = a2 * b2;
    std::cout << a2 << " * " << b2 << " Площа другого прямокутника дорівнює " << s2 << std::endl;
    //Введення та обчислення третього прямокутника
    std::cout << "Ведіть значення a4 сторони третього прямокутника\n";
    std::cin >> a4;
    std::cout << "Ведіть значення b4 сторони третього прямокутника\n";
    std::cin >> b4;
    s4 = a4 * b4;
    std::cout << a4 << " * " << b4 << " Площа третього прямокутника дорівнює " << s4 << std::endl;
    //Перевірка на менше або нуль та находження прямокутника з більшою площею
    if (s1 <= 0 or s2 <= 0 or s4 <= 0) {
        std::cout << "Введене недопустиме значення сторони трямокутника!";
    }
    else if (s1 > s2 && s1 > s4) {
        std::cout << "Площа першого прямокутник більша";
    }
    else if (s2 > s4) {
            std::cout << "Площа другого прямокутник більша";
    }
    else {
            std::cout << "Площа третього прямокутник більша";
    }

    return 0;
}