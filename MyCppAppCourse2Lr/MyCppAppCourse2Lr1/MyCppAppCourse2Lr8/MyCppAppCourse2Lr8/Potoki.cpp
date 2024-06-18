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
	{ // ����������� �� ���������
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

ostream& operator<<(ostream& os, const Point& point) // ���������� ��������� ������
{
	os << point.x << " " << point.y << " " << point.z;
	return os;
}

istream& operator>>(istream& is, Point& point) // ���������� ��������� ����� � ����
{
	is >> point.x >> point.y >> point.z;
	return is;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	string path = "myFile.txt";
	Point point(221, 243, 221);

	cout << point << endl; // ��� ����� ����� ���������� ��������� ������

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);

	if (!fs.is_open())
	{
		cout << "������ �������� �����!" << endl;
	}
	else
	{
		cout << "���� ������!" << endl;
		//fs << point << "\n";
		
		while (!fs.eof()) // ����� ������� �� 1 ������� � ��� �������� �� �����
		{
		Point point;
		fs >> point; // ��� ����� ����� ���������� ��������� ����� � ����
		cout << point << endl;
		}
	}
	fs.close();

};
