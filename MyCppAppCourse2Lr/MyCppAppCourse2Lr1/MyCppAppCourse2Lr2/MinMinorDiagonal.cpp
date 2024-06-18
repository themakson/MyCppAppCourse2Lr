#include "MinMinorDiagonal.h"
using namespace std;

void minMinorDiagonalMatrix(int arr[N][N])
{
	int fMinMDM = arr[0][4];
	cout << "Вызвана функция минимума второстепенной диагонали матрицы: ";
	for (int i = 0; i < N; i++) {
		if (fMinMDM > arr[i][4 - i])
		{
			fMinMDM = arr[i][4 - i];
		}
	}
	cout << fMinMDM << endl;
}