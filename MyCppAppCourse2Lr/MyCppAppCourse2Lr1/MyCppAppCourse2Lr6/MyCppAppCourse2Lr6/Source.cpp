#include <iostream>
#include <string>
#include "Human.h"
#include "Point.h"
#include "MyClass.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "----------------------------Работа с объектом -> Point" << endl << endl;
	Point a(12, 21);
	a.Print();

	Point b(66, false);
	b.Print();

	Point c(13, 22);
	c.Print();

	bool result = a == c; // Перегруженный оператор сравнения вернет 1 если true вернет 0 если false
	cout << "Результат перегруженного оператора сравнения (==) " << result << endl;

	Point d = a + c;
	cout << "Результат перегруженного оператора cцепления (+) " << endl;
	d.Print();

	a = c;
	cout << "Результат перегруженного оператора присваивания (=) " << endl;
	a.Print();
	c.Print();

	cout << "----------------------------Работа с другим объектом -> Human" << endl << endl;

	Human firstHuman;
	firstHuman.name = "Denis";
	firstHuman.Print();
	firstHuman.LenghtString();

	cout << "----------------------------Работа с другим объектом с динамической памятью -> MyClass" << endl << endl;

	MyClass e(11);

};