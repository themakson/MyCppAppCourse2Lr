#include "AverageValueLowPieceMatrix.h"
using namespace std;

void avgValuelowPieceMatrix(int arr[N][N])
{
	cout << "Вызвана функция вычисления среднего арифметического значения нижнетреугольной части матрицы: ";
	int fAvgVLPM = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			fAvgVLPM += arr[i][j];
		}
	}
	cout << fAvgVLPM / ((N * N) / 2 + (N / 2)) << endl;
}