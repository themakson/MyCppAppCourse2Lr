#include "MaxLowPieceMatrix.h"
using namespace std;

void maxLowPieceMatrix(int arr[N][N])
{
	setlocale(0, "");
	cout << "Вызвана функция максимума нижнетреугольной части матрицы: ";
	int fMaxLPM = arr[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			if (fMaxLPM < arr[i][j]) {
				fMaxLPM = arr[i][j];
			}
		}
	}
	cout << fMaxLPM << endl;
}