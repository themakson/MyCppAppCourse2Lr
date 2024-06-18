#include "AverageValueMatrix.h"
using namespace std;

void avgValueMatrix(int arr[N][N])
{
	int fAvg = 0;
	cout << "Вызвана функция вычисления среднего арифметического значения в массиве: ";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			fAvg += arr[i][j];
	}
	cout << fAvg / (N * N) << endl;
}