#include "SumLowPieceMatrix.h"
using namespace std;

void sumValuelowPieceMatrix(int arr[N][N])
{
	cout << "Вызвана функция вычисления суммы нижнетреугольной части матрицы: ";
	int fAvgVLPM = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			fAvgVLPM += arr[i][j];
		}
	}
	cout << fAvgVLPM << endl;
}