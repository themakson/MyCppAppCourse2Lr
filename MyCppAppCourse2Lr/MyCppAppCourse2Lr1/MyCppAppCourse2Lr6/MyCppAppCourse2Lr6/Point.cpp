#include "Point.h"

Point::Point() // ����������� �� ���������
{
		x = 0;
		y = 0;
}

Point::Point(int valueX, int valueY) // 1-�� ����������� ��� �������� ����������� �������� �,�
{
		x = valueX;
		y = valueY;
}

Point::Point(int valueX, bool boolean) // 2-�� ����������� ��� �������� ����������� �������� � � true ��� false �������� y
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

void Point::Print() // ����������� ������� ������ Point ��� ������ ��������� �� �����
{
	cout << "X = " << x << "\t  Y = " << y << endl << endl;
}

bool Point::operator==(const Point& other) // ������������� �������� ��������� (==)
{
	return this->x == other.x && this->y == other.y;
}

Point Point::operator+(const Point& other) // ������������� �������� ��������� (+)
{
			Point temp;
			temp.x = this->x + other.x;
			temp.y = this->y + other.y;
			return temp;
}

Point& Point::operator=(const Point& other) // ������������� �������� ������������� (=)
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

Point::~Point()// ������ ���������� ��� �������, �� ��������� ����� ��� ��� ������ �� ������� ��������� ������ ����� ��������� ����������
{
	cout << "�������� ����������" << endl;
}
