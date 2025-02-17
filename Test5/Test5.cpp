#include <iostream>

	int main()
	{
		int i = 50;
		int summ = 0;

		for (i; i > 0; i--) 
		{
			if (i % 2 == 0)

				summ += i;	
		}
		std::cout << "Сума цілих додатніх парних чисел менших 50 дорівнює " << summ << std::endl;
		return 0;
	}