#include "AvergeValueString.h"
using namespace std;

void avgValueString(int arr[N][N])
{
	cout << "Вызов функции среднего арифметического значения строки матрицы: | ";
	int avgStrArr[N]{};
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			avgStrArr[i] += arr[i][j];
	}
	for (int i = 0; i < N; i++)
	{
		cout << setw(6) << setprecision(5) << avgStrArr[i] / N << " | ";
	}
	cout << endl;
}