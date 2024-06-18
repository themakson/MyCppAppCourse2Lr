#include "MaxValueString.h"
using namespace std;

void MaxValueString(int arr[N][N])
{
	cout << "Вызов функции максимального значения строки матрицы: | ";
	int maxStrArr[N]{};
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			if (maxStrArr[i] < arr[i][j])
			{
				maxStrArr[i] = arr[i][j];
			}
	}
	for (int i = 0; i < N; i++)
	{
		cout << setw(6) << setprecision(5) << maxStrArr[i] << " | ";
	}
	cout << endl;
}