#include "AverageValueColumn.h"
using namespace std;

void avgValueColumn(int arr[N][N])
{
	cout << "Вызов функции среднего арифметического значения столбцов матрицы: | ";
	int sumArr[N]{};
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			sumArr[j] += arr[i][j];
	}
	for (int i = 0; i < N; i++)
	{
		cout << setw(6) << setprecision(5) << sumArr[i] / N << " | ";
	}
	cout << endl;
}