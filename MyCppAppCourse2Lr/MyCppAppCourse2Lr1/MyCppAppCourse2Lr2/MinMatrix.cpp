#include "MinMatrix.h"
using namespace std;

void minMatrix(int arr[N][N])
{
    int i, j;
    int fMin = arr[0][0];

    cout << "Вызвана функция поиска минимального значения в массиве: ";

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            if (arr[i][j] < fMin)
            {
                fMin = arr[i][j];
            }
    }
    cout << fMin << endl;
}