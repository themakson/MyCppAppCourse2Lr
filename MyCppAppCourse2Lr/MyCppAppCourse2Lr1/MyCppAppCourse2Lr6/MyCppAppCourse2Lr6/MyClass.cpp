#include "MyClass.h"

MyClass::MyClass()
{
}

MyClass::MyClass(int size) // ����������� ������� ������� ��������� ������, ��������� �������� ������ (���������� size) ������������ ������
{
	this->Size = size;
	this->data = new int[size];

	for (int i = 0; i < size; i++) 
	{
		data[i] = i;
	}
	cout << "�������� ����������� ������������ ��� ��������� ������� ������������ ������, ������: " << this << " ������ �������: " << size <<" ���������" << endl;
}

MyClass::~MyClass() // ���������� ��������� ��� ������� ������ ����� ������ ������ ������������, ����� ������ ������ !!!
{
	cout << "�������� ���������� ������������ ������ ��� ������ ������ " << this << endl;
	delete[] data;
}