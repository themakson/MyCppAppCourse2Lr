#include "Point.h"

Point::Point() // Конструктор по умолчанию
{
		x = 0;
		y = 0;
}

Point::Point(int valueX, int valueY) // 1-ый Конструктор для указания изначальной величины х,у
{
		x = valueX;
		y = valueY;
}

Point::Point(int valueX, bool boolean) // 2-ый Конструктор для указания изначальной величины х и true или false величины y
{
		x = valueX;

		if (boolean) {
			y = 2;
		}
		else 
		{
			y = -2;
		}
}

void Point::Print() // Собственная функция класса Point для вывода элементов на экран
{
	cout << "X = " << x << "\t  Y = " << y << endl << endl;
}

bool Point::operator==(const Point& other) // перегруженный оператор сравнения (==)
{
	return this->x == other.x && this->y == other.y;
}

Point Point::operator+(const Point& other) // перегруженный оператор сцепления (+)
{
			Point temp;
			temp.x = this->x + other.x;
			temp.y = this->y + other.y;
			return temp;
}

Point& Point::operator=(const Point& other) // перегруженный оператор присванивания (=)
{
	Point proverka;
			if (&other != this)
			{
				proverka.x = this->x = other.x;
				proverka.y = this->y = other.y;
				return proverka;
			}
			else {
				return proverka;
			}
			return proverka;
}

Point::~Point()// Пустой деструктор для примера, Он сработает когда наш код выйдет за ПРЕДЕЛЫ ВИДИМОСТИ тоесть когда программа закончится
{
	cout << "Сработал деструктор" << endl;
}
