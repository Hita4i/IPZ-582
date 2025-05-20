#include <iostream>

using namespace std;

int main()
{

    srand(time(NULL));
    int forRand = 9;
    int const sizeY = 9, sizeX = 9;
    int matrix[sizeY][sizeX];
    for (int y = 0; y < sizeY; y++)
    {
        for (int x = 0; x < sizeX; x++)
        {
            int a = 1 + rand() % forRand;
            matrix[y][x] = a;
            matrix[x][y] = matrix[y][x];  
        };
        
    };
    for (int i = 0; i < sizeY; i++)
    {
        for (int j = 0; j < sizeX; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }; 
}