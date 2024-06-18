#include "MinMatrix.h"
#include "MaxMatrix.h"
#include "MaxLowPieceMatrix.h"
#include "MinLowPieceMatrix.h"
#include "MaxHightPieceMatrix.h"
#include "MinHightPieceMatrix.h"
#include "MinMainDiagonal.h"
#include "MaxMainDiagonal.h"
#include "ZeroCall.h"
#include "MinMinorDiagonal.h"
#include "MaxMinorDiagonal.h"
#include "AverageValueMatrix.h"
#include "AverageValueLowPieceMatrix.h"
#include "AverageValueHightPiece.h"
#include "SumStringMatrix.h"
#include "SumColumnMatrix.h"
#include "MinValueString.h"
#include "MaxValueString.h"
#include "MinValueColumn.h"
#include "MaxValueColumn.h"
#include "AvergeValueString.h"
#include "AverageValueColumn.h"
#include "SumLowPieceMatrix.h"
#include "SumHightPieceMatrix.h"
#include "AverageClosestValue.h"
using namespace std;

void main()

{

	setlocale(0, "");
	int m[N][N]{};
	int i, j;
	cout << "Здесь происходит двумерный массив данных 5 на 5: \n" << endl;
	srand(time(NULL));
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) m[i][j] = rand() % 20;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			cout << setw(8) << setprecision(5) << m[i][j];
		cout << endl;
	}
	cout << endl;

	minMatrix(m);
	maxMatrix(m);
	avgValueMatrix(m);
	cout << "\n********************************************\n" << endl;
	           
	cout << "Нижнетреугольная часть матрицы: \n" << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			cout << setw(8) << setprecision(5) << m[i][j];
		}
		if (i == 0) printPrint(4);
		if (i == 1) printPrint(3);
		if (i == 2) printPrint(2);
		if (i == 3) printPrint(1);
		cout << '\n';
	}
	cout << endl;

	minLowPieceMatrix(m);
	maxLowPieceMatrix(m);
	avgValuelowPieceMatrix(m);
	sumValuelowPieceMatrix(m);
	cout << "\n********************************************\n" << endl;

	cout << "Верхнетреугольная часть матрицы: \n" << endl;

	for (int i = 0; i < N; i++) {
		if (i == 1) printPrint(1);
		if (i == 2) printPrint(2);
		if (i == 3) printPrint(3);
		if (i == 4) printPrint(4);
		for (int j = 0 + i; j < N; j++) {
			cout << setw(8) << setprecision(5) << m[i][j];
		}
		cout << '\n';
	}
	cout << endl;

	minHightPieceMatrix(m);
	maxHightPieceMatrix(m);
	avgValueHightieceMatrix(m);
	sumValueHightieceMatrix(m);
	cout << "\n********************************************\n" << endl;

	cout << "Главная диагональ матрицы: \n" << endl;

	for (int i = 0; i < N; i++) {
		if (i == 1) printPrint(1);
		if (i == 2) printPrint(2);
		if (i == 3) printPrint(3);
		if (i == 4) printPrint(4);
		cout << setw(8) << setprecision(5) << m[i][i];
		if (i == 0) printPrint(4);
		if (i == 1) printPrint(3);
		if (i == 2) printPrint(2);
		if (i == 3) printPrint(1);
		cout << '\n';
	}
	cout << endl;

	minMainDiagonalMatrix(m);
	maxMainDiagonalMatrix(m);
	cout << "\n********************************************\n" << endl;

	cout << "Второстепенная диагональ матрицы: \n" << endl;

	for (int i = 0; i < N; i++) {
		if (i == 0) printPrint(4);
		if (i == 1) printPrint(3);
		if (i == 2) printPrint(2);
		if (i == 3) printPrint(1);
		cout << setw(8) << setprecision(5) << m[i][4 - i];
		if (i == 1) printPrint(1);
		if (i == 2) printPrint(2);
		if (i == 3) printPrint(3);
		if (i == 4) printPrint(4);
		cout << '\n';
	}
	cout << endl;

	minMinorDiagonalMatrix(m);
	maxMinorDiagonalMatrix(m);
	cout << "\n********************************************\n" << endl;
	sumStringlMatrix(m);
	sumColumnlMatrix(m);
	cout << "\n********************************************\n" << endl;
	MinValueString(m);
	MinValueColumn(m);
	cout << "\n********************************************\n" << endl;
	MaxValueString(m);
	MaxValueColumn(m);
	cout << "\n********************************************\n" << endl;
	avgValueString(m);
	avgValueColumn(m);
	cout << "\n********************************************\n" << endl;
	avgClosestValue(m);
	cout << "\n********************************************\n" << endl;
}