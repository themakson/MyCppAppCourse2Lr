#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	//������
	int num = 10;
	int& a = num;

	a = 15;
	cout << &num << " <- (��� ������ ������ num) " << num << " <- (��� �������� ������ num)" << endl;
	cout << &a << " <- (��� ������ ������ a); " << a << " <- (��� �������� ������ a)" << endl;

	//���������
	int val = 30;
	int* ptrval = &val;

	cout << &val << " <- (��� ������ ������ val) " << val << " <- (��� �������� ������ val)" << endl;
	cout << ptrval << " <- (��� �������� ��������� �� ������ ������ val); " << *ptrval << " <- (��� ��������� �� ������ ������ val)" << endl;

	return 0;
}