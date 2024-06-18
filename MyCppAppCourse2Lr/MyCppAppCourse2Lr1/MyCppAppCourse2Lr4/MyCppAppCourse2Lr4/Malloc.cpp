// ������ ������������� ������� malloc
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int len;
	cout << "������� ����� ������ � ��������: ";
	cin >> len;

	char* buffer = (char*)malloc(len + 1); // ������������ ��������� ������ ��� ���������� ������
	if (buffer == NULL) exit(1); // ���� ��������� ������ �� �����������, ��������� ���������

	for (int i = 0; i < len; i++)
		buffer[i] = rand() % 26 + 'a';
	buffer[len] = '\0'; // ������� �������

	cout << "��������� ������: " << buffer << "n";
		free(buffer); // ����������� ������

		return 0;


}