#include <iostream>
#include <Windows.h>

// 
// 
//������ No2.
//1.2.��������� ������� ��������, ��� ��� ������� ������ ��� ����� ������ �� ����� ����
//����� ����� ������ : ���������� �� ����������.


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Ukrainian");

    int day_number;
    char monday[] = "Monday - ��������\n";
    char tuesday[] = "Tuesday - ³������\n";
    char wednesday[] = "Wednesday - ������\n";
    char thursday[] = "Thursday - ������\n";
    char friday[] = "Friday - �'������\n";
    char saturday[] = "Saturday - ������\n";
    char sunday[] = "Sunday - �����\n";
    std::cout << "������ ����� �� 1 �� 7 ��� ��������� ����������� ��� ����� �� ���� �����\n";
    std::cin >> day_number;
    if (day_number < 1 or day_number > 7) {
        std::cout << "������� ����������� ��������\n";
    }
    else if (day_number == 1) {
        std::cout << monday;
    }
    else if (day_number == 2) {
        std::cout << tuesday;
    }
    else if (day_number == 3) {
        std::cout << wednesday;
    }
    else if (day_number == 4) {
        std::cout << thursday;
    }
    else if (day_number == 5) {
        std::cout << friday;
    }
    else if (day_number == 6) {
        std::cout << saturday;
    }
    else if (day_number == 7) {
        std::cout << sunday;
    }
    return main();
}