#include <string.h>
#include <stdio.h>
#include <iostream>
#include <cstring> // для strlen

using namespace std;

void СopyingLine(char a[], char b[]) { // Свой метод для копирование строки

	for (int i = 0; b[i] != NULL; i++)
	{
		a[i] = b[i];
	}

}


int main()
{
	setlocale(LC_ALL, "RU");

	wchar_t input[256];
	wcin.getline(input, 256);

	string str1 = "i am";
	string str2 = "Cool";
	string str3 = "Programmist";

	// Определение длины способ 1 через strlen()

	wcout << L"Способ 1 " << L"Строка в которой Ввели " << L"Содержит  " << wcslen(input) << L"  Символов\n";

	// Определение длины способ 2 через lenght()

	cout <<"Способ 2 " <<"Строка str1 Содержит  " << str1.length() << "  Символов\n";
	
	// Определение длины способ 3 через size()

	cout << "Способ 3 " << "Строка str1 Содержит  " << str1.size() << "  Символов\n";

	// Производим копирование строк Используя свой метод

	char copy[40] = ">>Меня скопировали<<";
	char paste[40] = "";
	СopyingLine(paste, copy); // Применяем свой метод копирование строки

	cout << "Копирование строк своим методом  "  << paste << "\n";

	// Производим сравнение Используя strcmp

	char s1[12] = "Hello";
	char s2[10] = "Hello";

	int res = strcmp(s1, s2);
	if (res == 0)
		puts("Строка s1 и s2 Равны!");
	else
		puts("Строка s1 и s2 Не равны!");

	// Производим конкатенации строк через сложение переменных String

	string result;
	result = "Конкатенация строк str1+str2+str3= " + str1 + " " + str2 + " " + str3;
		cout << result << endl;
	

	return 0;
		
	



};

