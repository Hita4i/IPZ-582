#include <iostream> 

int main()
{
	double price;
	int quantity;
	int code_tovaru;
	std::cout << "Введіть число від 1 до 6 для отримання" << std::endl;
	std::cin >> code_tovaru;
	
	switch (code_tovaru)
	{
	case 1:
			quantity = 10;
			price = 5.20;
			break;
			
	case 2:
			quantity = 50;
			price = 11.00;
			break;
			
	case 3:
			quantity = 110;
			price = 7;
			break;
			
	case 4:
			quantity = 360;
			price = 16.38;
			break;

	case 5:
			quantity = 20;
			price = 5000;
			break;
			
	case 6:
			quantity = 3;
			price = 12;
			break;
	default:
		std::cout << "Введено невірне значення!" << std::endl;
		break;
	}
	std::cout << "Код товару: " << code_tovaru << std::endl
			  << "Ціна товару: " << price << std::endl
			  << "Кількість товару на складі: " << quantity << std::endl;
	return 0;
}