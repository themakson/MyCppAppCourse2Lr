#include <iostream>
using namespace std;

template <class T>
void Sort(T array[], size_t size)
{
	int i, j;
	T tmp;
	for (i=0; i < size-1; i++)
	for (j = size - 1; i < j; j--)
		if (array[i] > array[j])
		{
			tmp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = tmp;
		}
}

class Money
{
	long dollars;
	int cents;
public:
	Money() {}
	Money(long d, int c)
	{
		dollars = d;
		cents = c;
	}

	int operator>(const Money&) const;
	friend ostream& operator <<(ostream&, Money&);
};

int Money::operator>(const Money& amt) const
{
	return
		(dollars > amt.dollars) ||
		((dollars == amt.dollars) && (cents > amt.cents));
}

ostream& operator << (ostream& os, Money& amt)
{
	os << "$" << amt.dollars << '.' << amt.cents;
	return os;
}

void main(void)
{

	Money mas[] = { Money(19,10),
				  Money(99,99),
				  Money(99,95),
				  Money(19,95)
	};
	
	int i;
	Sort(mas, sizeof(mas) / sizeof(mas[0]));
	for (i = 0; i < sizeof(mas) / sizeof(mas[0]); i++)
		cout << "mas[" << i << "] = " << mas[i] << endl;

};

