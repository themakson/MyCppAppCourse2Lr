// ������ ������������� ������� calloc
#include <iostream>;
#include <cstdlib>;
using namespace std;

int main(){
	setlocale(LC_ALL, "RU");

	int size;

	cout << ("������� ���������� ���������: ");
	cin >> size;
	int* arrayPtr = (int*)calloc(size, sizeof(int));// �������� ������ ��� ������������ ������ ����� ����� 

	if (arrayPtr == NULL) exit(1); // ��������� ������ ��������� ���� ������ 0

	for (int i = 0; i < size; i++) // � ����� ��������� ������
	{
		cout << ("������� �����: ");
		cin >> arrayPtr[i];
	}

	cout << "��������� �����: ";
	for (int i = 0; i < size; i++) // � ����� ������� �������� ������� �� ����������� ���������� ������
		cout << arrayPtr[i] << " ";
	free(arrayPtr); // ������� ������������ ������ �����
	return 0;

}
// ����� : calloc �������� ������ ��� ������ ������, �������������� ������������� � ������. ��������� 2 ���������.
// malloc �������� ������ ��� �������������.��������� ���� ��������.