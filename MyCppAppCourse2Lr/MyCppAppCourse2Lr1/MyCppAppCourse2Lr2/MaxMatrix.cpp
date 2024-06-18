#include "MaxMatrix.h"
using namespace std;

void maxMatrix(int arr[N][N])
{
	int i, j;
	int fMax = arr[0][0];

	cout << "Вызвана функция поиска максимального значения в массиве: ";

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			if (arr[i][j] > fMax)
			{
				fMax = arr[i][j];
			}
	}
	cout << fMax << endl;
}