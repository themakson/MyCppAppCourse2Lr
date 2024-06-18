#include "MaxMinorDiagonal.h"
using namespace std;

void maxMinorDiagonalMatrix(int arr[N][N])
{
	int fMinMDM = arr[0][4];
	cout << "Вызвана функция максимума второстепенной диагонали матрицы: ";
	for (int i = 0; i < N; i++) {
		if (fMinMDM < arr[i][4 - i])
		{
			fMinMDM = arr[i][4 - i];
		}
	}
	cout << fMinMDM << endl;
}