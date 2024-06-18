#pragma once
#include <iostream>
using namespace std;

class Point

{
public:

	Point();
	int x;
	int y;

	Point(int valueX, int valueY); 

	Point(int valueX, bool boolean);

	void Print();

	bool operator == (const Point& other);

	Point operator +(const Point& other);

	Point& operator = (const Point& other);

	~Point();
};

