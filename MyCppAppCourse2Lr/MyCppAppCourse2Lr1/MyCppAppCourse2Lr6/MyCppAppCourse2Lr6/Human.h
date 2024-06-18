#pragma once
#include <iostream>
using namespace std;
class Human
{
public:
	Human();
	string name;
	char c0; // Переменная для хранения символов строки
	void LenghtString();// Собственная функция класса Human для показа длины имени на экран
	void Print();// Собственная функция класса Human для вывода имени на экран

	~Human();
};

