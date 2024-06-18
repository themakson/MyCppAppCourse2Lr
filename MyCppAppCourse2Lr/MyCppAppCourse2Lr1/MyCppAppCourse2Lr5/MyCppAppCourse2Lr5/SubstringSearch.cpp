#include <iostream>
#include <string>
#include <fstream> // Для работы с открытием\записью\чтением\закрытием файлов
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	char text1[1024];
	char text2[1024];
	ifstream file("myFile.txt");
	if (file.is_open()) {
		cout << "Введите текст для поиска: ";
		cin >> text2;
		while (file.getline(text1, 1024)) {
			if (strstr(text1, text2)) // возвращает указатель на первое вхождение в строку text1, строки указанной text2, если совпадений не обнаружно, возвращает NULL
				cout << text1 << endl;
		}
		file.close();

	}
	else
		cout << "Ошибка! файла не существует!" << endl;

	system("pause");
	return 0;
}