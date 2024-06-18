#include "MaxHightPieceMatrix.h"
using namespace std;

void maxHightPieceMatrix(int arr[N][N])
{
	int fMaxHPM = arr[0][0];

	cout << "Вызвана функция максимума верхнетреугольной части: ";

	for (int i = 0; i < N; i++) {
		for (int j = 0 + i; j < N; j++) {
			if (fMaxHPM < arr[i][j])
			{
				fMaxHPM = arr[i][j];
			}
		}
	}
	cout << fMaxHPM << endl;
}