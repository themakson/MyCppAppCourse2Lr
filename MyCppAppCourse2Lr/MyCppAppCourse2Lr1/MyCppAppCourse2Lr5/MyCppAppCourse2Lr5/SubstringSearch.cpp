#include <iostream>
#include <string>
#include <fstream> // ��� ������ � ���������\�������\�������\��������� ������
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	char text1[1024];
	char text2[1024];
	ifstream file("myFile.txt");
	if (file.is_open()) {
		cout << "������� ����� ��� ������: ";
		cin >> text2;
		while (file.getline(text1, 1024)) {
			if (strstr(text1, text2)) // ���������� ��������� �� ������ ��������� � ������ text1, ������ ��������� text2, ���� ���������� �� ���������, ���������� NULL
				cout << text1 << endl;
		}
		file.close();

	}
	else
		cout << "������! ����� �� ����������!" << endl;

	system("pause");
	return 0;
}