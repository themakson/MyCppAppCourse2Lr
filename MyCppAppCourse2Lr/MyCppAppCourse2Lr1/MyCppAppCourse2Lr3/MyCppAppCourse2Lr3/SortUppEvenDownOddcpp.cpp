#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	const int n = 5;
	int m[n];
	srand(time(0));
	cout << "������ M:\n";
	for (int i = 0; i < n; i++)
	{
		m[i] = rand() % 10;
		cout << "�[" << i << "]= " << m[i] << endl;
	}


	// �����������
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (m[j] < m[j - 1]) { temp = m[j]; m[j] = m[j - 1]; m[j - 1] = temp; }
		}
	}
	cout << "������ �� ����������� ������ �����:\n";
	for (int i = 0; i < n; i++)
	{
		if (m[i] % 2 == 0) // ������� ��� ������ �����
			cout << m[i] << " ";
		else break;
	}
	cout << endl;

	// ��������
	for (int i = 0; i < n; i++)
	{
		for (int g = 1; g < n - i; g++)
		{
			if (m[g] > m[g - 1]) { temp = m[g]; m[g] = m[g - 1]; m[g - 1] = temp; }
		}
	}

	cout << "������ �� �������� �������� �����:\n";
	for (int i = 0; i < n; i++)
	{
		if (m[i] % 2 == 0 == false) // ������� ��� �������� �����
			cout << m[i] << " ";
		else break;
	}
	return 0;
}