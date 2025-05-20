#include <iostream>


const int Y = 9, X = 9;
int mas[Y][X] = {};

int rightStart = 0;
int rightStop = Y;
int rightLine = 0;

int downStop = X;

int leftStop = 0;

int counter = 1;
	
void rightStep() // Праворуч
{
	for (int y = rightLine; y < rightLine + 1; y++)
	{
		if (rightStart == (Y - 1) / 2 && rightLine == (Y - 1) / 2)
		{
			mas[rightLine][rightStart] = Y * X;
			counter++;
		}
		else
		{
			for (int x = rightStart; x < rightStop; x++)
			{
				mas[rightLine][x] = counter;
				counter++;
			};
		};
	};
	rightStart++;
	rightStop--;
	rightLine++;
};
	
void downStep() // Вниз
{
	for (int y = rightStart; y < downStop; y++)
	{
		mas[y][rightStop] = counter;
		counter++;
	};
	downStop--;
};
	
void leftStep() // Вліво
{
	for (int y = 0; y < 1; y++)
	{
		for (int x = rightStop - 1; x >= leftStop; x--)
		{
			mas[downStop][x] = counter;
			counter++;
		};
	};
	leftStop++;
};
	
void upStep() // вгору
{
	for (int y = downStop - 1; y >= rightLine; y--) {
		mas[y][rightLine - 1] = counter;
		counter++;
	}
}
void printMas()
{
	for (int i = 0; i < Y; i++)
	{
		for (int j = 0; j < X; j++)
		{
			std::cout << mas[i][j] << "  ";
		};
		std::cout << std::endl;
	};
};
	
int main()
{
	srand(time(NULL));
	while (counter <= Y * X)
	{
		rightStep();
		downStep();
		leftStep();
		upStep();
	};
	printMas();

	return 0;
}