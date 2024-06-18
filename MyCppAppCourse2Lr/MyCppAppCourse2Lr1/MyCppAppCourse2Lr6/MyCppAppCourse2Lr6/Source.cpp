#include <iostream>
#include <string>
#include "Human.h"
#include "Point.h"
#include "MyClass.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "----------------------------������ � �������� -> Point" << endl << endl;
	Point a(12, 21);
	a.Print();

	Point b(66, false);
	b.Print();

	Point c(13, 22);
	c.Print();

	bool result = a == c; // ������������� �������� ��������� ������ 1 ���� true ������ 0 ���� false
	cout << "��������� �������������� ��������� ��������� (==) " << result << endl;

	Point d = a + c;
	cout << "��������� �������������� ��������� c�������� (+) " << endl;
	d.Print();

	a = c;
	cout << "��������� �������������� ��������� ������������ (=) " << endl;
	a.Print();
	c.Print();

	cout << "----------------------------������ � ������ �������� -> Human" << endl << endl;

	Human firstHuman;
	firstHuman.name = "Denis";
	firstHuman.Print();
	firstHuman.LenghtString();

	cout << "----------------------------������ � ������ �������� � ������������ ������� -> MyClass" << endl << endl;

	MyClass e(11);

};