#include <iostream>

int main()
{
	const int N = 4, M = 3;
	int sum = 0;
	int mas[N][M] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12},
	};
	for (int i = 0; i < N; i++) 
	{
		int sun = 0;
		for (int j = 0; j < M; j++)
		{
			if (mas[i][j] < 5) {
				mas[i][j] = 5;
				
			}	
		}
	}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++){
			sum += mas[i][j];
			std::cout << mas[i][j] << std::endl;
		}
	return sum;
	
}


