#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Ukrainian");
    // ���� ���� �� ��� ������
    double ogirok = 50;
    double tomat = 40;
    // ³������ ��������� ����
    double r;   
    std::cout << "������ ������� ��������� ���� (r): ";
    std::cin >> r;

    // ���������� ����� ���
    double newPriceOgirok = ogirok * (1 + r / 100);
    double newPriceTomat = tomat * (1 + r / 100);

    // ���� ������ � ����� ��� �� �����
    std::cout << "����� ���� ������� ������: " << ogirok << std::endl;
    std::cout << "���� ���� ������� ������: " << newPriceOgirok << std::endl;
    std::cout << "����� ���� ������� ������: " << tomat << std::endl;
    std::cout << "���� ���� ������� ������: " << newPriceTomat << std::endl;

    return 0;
}