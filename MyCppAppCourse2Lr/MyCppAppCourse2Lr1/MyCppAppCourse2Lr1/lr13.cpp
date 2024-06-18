#include<iostream>
using namespace std;

void Swap1(int x, int y) {
	int c = x;
	int d = y;

	x = d;
	y = c;

	cout << "Сработал Swap1" << endl;
}

void Swap2(int* x, int* y) {
	int c = *x;
	int d = *y;

	*x = d;
	*y = c;

	cout << "Сработал Swap2" << endl;
}

void Swap3(int& x, int& y) {
	int c = x;
	int d = y;

	x = d;
	y = c;

	cout << "Сработал Swap3" << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	int a, b;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << endl;

	void Swap1(int, int);
	void Swap2(int*, int*);
	void Swap3(int&, int&);

	cout << "Значения до выполнения функции Swap: a = " << a << "  b = " << b << endl;
	Swap1(a, b);
	cout << "Значения после выполнения функции Swap1: a = " << a << " b = " << b << endl;
	int* pa = &a;
	int* pb = &b;
	Swap2(pa, pb);
	cout << "Значения после выполнения функции Swap2: a = " << a << " b = " << b << endl;
	int& aRef = a;
	int& bRef = b;
	Swap3(aRef, bRef);
	cout << "Значения после выполнения функции Swap3: a = " << a << " b = " << b << endl;

	return 0;
}