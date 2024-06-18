//#include <iostream>
//#include <string>
//using namespace std;
//
//class Human 
//{
//public:
//	char c0 = 'abcd'; // Переменная для хранения символов строки
//	string name;
//
//	void LenghtString() {
//		cout << "Длина этой строки равна : " << name.length() << endl << endl;
//	}
//
//	void Print() // Собственная функция класса Human для вывода имени на экран
//	{
//		cout << "Его звали : " << name << endl << endl;
//	}
//};
//
//class Point {
//	
//public:
//
//	int x;
//	int y;
//
//	Point() { // Конструктор по умолчанию
//		x = 0;
//		y = 0;
//	}
//
//	Point(int valueX, int valueY) { // 1-ый Конструктор для указания изначальной величины х,у
//
//		x = valueX;
//		y = valueY;
//	}
//
//	Point(int valueX, bool boolean) { // 2-ый Конструктор для указания изначальной величины х и true или false величины y
//
//		x = valueX;
//
//		if (boolean) {
//			y = 2;
//		}
//		else 
//		{
//			y = -2;
//		}
//	}
//	
//	~Point() { // Пустой деструктор для примера, Он сработает когда наш код выйдет за ПРЕДЕЛЫ ВИДИМОСТИ тоесть когда программа закончится
//
//		cout << "Сработал деструктор" << endl;
//
//	}
//	
//	void Print() // Собственная функция класса Point для вывода элементов на экран
//	{
//		cout << "X = " << x << "\t  Y = " << y << endl << endl;
//	}
//
//	bool operator == (const Point & other) { // перегруженный оператор сравнения (==)
//		return this->x == other.x && this->y == other.y;
//	}
//
//	Point operator +(const Point& other) { // перегруженный оператор сцепления (+)
//		Point temp;
//		temp.x = this->x + other.x;
//		temp.y = this->y + other.y;
//		return temp;
//	}
//
//	Point& operator = (const Point& other) { // перегруженный оператор присванивания (=)
//		Point proverka;
//		if (&other != this)
//		{
//			proverka.x = this->x = other.x;
//			proverka.y = this->y = other.y;
//			return proverka;
//		}
//		else {
//			return proverka;
//		}
//		return proverka;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Point a(12, 21);
//	a.Print();
//
//	Point b(66, false);
//	b.Print();
//
//	Point c(13, 22);
//	c.Print();
//
//	bool result = a == c; // Перегруженный оператор сравнения вернет 1 если true вернет 0 если false
//	cout << "Результат перегруженного оператора сравнения (==) " << result << endl;
//
//	Point d = a + c;
//	cout << "Результат перегруженного оператора cцепления (+) " << endl;
//	d.Print();
//
//	a = c;
//	cout << "Результат перегруженного оператора присваивания (=) " << endl;
//	a.Print();
//	c.Print();
//
//
//	Human firstHuman;
//	firstHuman.name = "Denis";
//	firstHuman.Print();
//	firstHuman.LenghtString();
//
//
//
//};

