#include <iostream>
#include <ctime>
//Користувач загадує ціле число з інтервалу[A, B].
// Написати програму, яка за мінімальну кількість питань вгадає це число.
// Гра відбувається наступним чином : користувач повідомляє програмі числа А та В.
// Програма виводить свою версію числа.Якщо це менше задуманого числа, то користувач 
// повідомляє програмі числом - 1, якщо більше – числом 1, а якщо число вгадано - 0. 
// Таким чином буде відбуватись до тих пір, поки користувач не вгадає число.

int main()
{

	int a;
	int b;
	int user_num;
	int user_ansver;
	std::cout << "Введіть число початку інтервалу:" << std::endl;
	std::cin >> a;
	std::cout << "Введіть число кінця інтервалу:" << std::endl;
	std::cin >> b;
	std::cout << "Загадайте число в рамках введеного інтервалу:" << std::endl;
	std::cin >> user_num;
	
	do {
		srand(time(NULL));
		int pc_num = rand() % (b - a) + a;
		std::cout << "Загадане число " << pc_num << " ?" << std::endl;
		std::cout << "якщо число удагано вірно - введи 0, якщо число більше загаданого - введи 1" << std::endl;
		std::cout << "якщо число меньше загаданого - введи -1" << std::endl;

		std::cin >> user_ansver;
		if (user_ansver == 1)
		{
			b = pc_num;
			std::cout << "Спробую ще разок" << std::endl;
			continue;
		};
		if (user_ansver == -1)
		{
			a = pc_num;
			std::cout << "Спробую ще разок" << std::endl;
			continue;
		};
		if (user_ansver == 0)
		{
			std::cout << "Ураа!!" << std::endl;
			break;
		};
			
	} while (true);

	return 0;
}