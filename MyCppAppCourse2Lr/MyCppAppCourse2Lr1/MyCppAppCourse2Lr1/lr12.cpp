#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	//—сылки
	int num = 10;
	int& a = num;

	a = 15;
	cout << &num << " <- (Ёто ссылка €чейки num) " << num << " <- (Ёто значение €чейки num)" << endl;
	cout << &a << " <- (Ёто ссылка €чейки a); " << a << " <- (Ёто значение €чейки a)" << endl;

	//”казатели
	int val = 30;
	int* ptrval = &val;

	cout << &val << " <- (Ёто ссылка €чейки val) " << val << " <- (Ёто значение €чейки val)" << endl;
	cout << ptrval << " <- (Ёто значение указател€ на ссылку €чейки val); " << *ptrval << " <- (Ёто указатель на ссылку €чейки val)" << endl;

	return 0;
}