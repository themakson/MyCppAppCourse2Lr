//#include <iostream>
#include <cmath> // - ���������� ��� ���������� � �������

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");// - ������� ��� ����������� �������� ����� � ��������� ������
	int a, b;
	cout << "������� �����: ";
	cin >> a;
	cout << "������� ������� �����: ";
	cin >> b;
	cout << "���������= " << pow(a, b) << endl;

	return 0;
}