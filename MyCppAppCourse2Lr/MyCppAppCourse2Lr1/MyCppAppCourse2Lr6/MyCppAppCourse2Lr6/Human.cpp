#include "Human.h"

Human::Human()
{
	string name;
	char c0 = 'abcd';
}

void Human::LenghtString()
{
	cout << "Длина этой строки равна : " << name.length() << endl << endl;
}

void Human::Print()
{
	cout << "Его звали : " << name << endl << endl;
}

Human::~Human()
{
}
