#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

class Point {

public:

	int x;
	int y;
	int z;

	Point() 
	{ // Конструктор по умолчанию
		x = 0;
		y = 0;
		z = 0;
	}

	Point(int x, int y, int z) 
	{ 
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void Print() 
	{
		cout << "X = " << x << "\t Y = " << y << "\t Z = " << z << endl << endl;
	}

	~Point() {
	}
};

ostream& operator<<(ostream& os, const Point& point) // Перегрузка оператора вывода
{
	os << point.x << " " << point.y << " " << point.z;
	return os;
}

istream& operator>>(istream& is, Point& point) // Перегрузка оператора ввода в файл
{
	is >> point.x >> point.y >> point.z;
	return is;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	string path = "myFile.txt";
	Point point(221, 243, 221);

	cout << point << endl; // Для этого нужна перегрузка оператора вывода

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);

	if (!fs.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;
		//fs << point << "\n";
		
		while (!fs.eof()) // Чтобы считать не 1 элемент а все элементы из файла
		{
		Point point;
		fs >> point; // Для этого нужна перегрузка оператора ввода в файл
		cout << point << endl;
		}
	}
	fs.close();

};
