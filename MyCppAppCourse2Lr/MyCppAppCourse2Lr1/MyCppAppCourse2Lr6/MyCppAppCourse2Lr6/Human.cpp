#include "Human.h"

Human::Human()
{
	string name;
	char c0 = 'abcd';
}

void Human::LenghtString()
{
	cout << "����� ���� ������ ����� : " << name.length() << endl << endl;
}

void Human::Print()
{
	cout << "��� ����� : " << name << endl << endl;
}

Human::~Human()
{
}
