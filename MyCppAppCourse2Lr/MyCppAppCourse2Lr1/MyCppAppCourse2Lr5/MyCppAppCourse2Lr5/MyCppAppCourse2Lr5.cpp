#include <iostream>
#include <string>
#include <fstream> // Для работы с открытием\записью\чтением\закрытием файлов
using namespace std;

int main(){
	setlocale(LC_ALL, "RU");

	string path = "myFile.txt";

	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else 
	{
		cout << "Файл открыт!" << endl;
		char ch;
		size_t space = 0; // переменная создана для посчета только пробелов
		int count = 0; // для подсчета всех символов и чисел и пробелов и новых подстрок
		while (fin.get(ch)) // в объект ifstream "fin" методом гет забираем символы, цикл работает пока true, true - это пока там есть что считывать
		{
			cout << ch; // вывод каждого символа по одной
			count++; // с каждой итерацие добавляем счетчик наших символов
			if (ch == ' ') space++; // проверка на пустые символы, тоже счетчик

		}
		cout << "\nФайл успешно прочитан!";
		cout << "\nКоличество всех символов в данном файле: " << count;
		cout << "\nКоличество пробелов в данном файле: " << space << endl;
	}
	fin.close();
	system("pause");
	return 0;
}
