#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	int mas[] = { 2,5,-8,1,-4,6,3,-5,-9,13,0,4,9 };
	// ������� ������� ���. � ����. ���������
	int imin, imax;
	// ���������� n - ���������� ���������
	int n = sizeof(mas) / sizeof(int);
	int i;
	// ��������� ��������� �������� ��� ��� � ����
	imin = 0; imax = 0;

	for (i = 0; i < n; i++)
		cout << mas[i] << ' ';
	cout << endl;
	for (i = 0; i < n - 1; i++) // ���������� ��� � ����
	{
		imin = i;
		for (int j = i + 1; j < n; j++)
			if (mas[j] < mas[imin]) imin = j;
		int t = mas[i];
		mas[i] = mas[imin];
		mas[imin] = t;
	}
	for (i = 0; i < n; i++) // ����� �� �����
		cout << mas[i] << ' ';
	cout << endl;


}