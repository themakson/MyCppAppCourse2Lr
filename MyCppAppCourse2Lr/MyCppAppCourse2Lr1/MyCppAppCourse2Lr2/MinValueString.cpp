#include "MinValueString.h"
using namespace std;

void MinValueString(int arr[N][N])
{
	cout << "Вызов функции минимального значения строки матрицы: | ";
	int minStrArr[N]{};
	for (int i = 0; i < N; i++)
	{
		minStrArr[i] = 500;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			if (minStrArr[i] > arr[i][j])
			{
				minStrArr[i] = arr[i][j];
			}
	}
	for (int i = 0; i < N; i++)
	{
		cout << setw(6) << setprecision(5) << minStrArr[i] << " | ";
	}
	cout << endl;
}