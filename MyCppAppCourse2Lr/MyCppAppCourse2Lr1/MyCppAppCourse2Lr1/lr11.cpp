//#include <iostream>
#include <cmath> // - Библиотека для вовездения в степень

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");// - Функция для поддержания русского языка в операторе вывода
	int a, b;
	cout << "Введите число: ";
	cin >> a;
	cout << "Введите степень числа: ";
	cin >> b;
	cout << "Результат= " << pow(a, b) << endl;

	return 0;
}