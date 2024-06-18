// Пример использования функции malloc
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int len;
	cout << "Укажите длину строки в символах: ";
	cin >> len;

	char* buffer = (char*)malloc(len + 1); // динамическое выделение памяти под символьную строку
	if (buffer == NULL) exit(1); // если выделение памяти не выполнилось, завершить программу

	for (int i = 0; i < len; i++)
		buffer[i] = rand() % 26 + 'a';
	buffer[len] = '\0'; // нулевой элемент

	cout << "Случайная строка: " << buffer << "n";
		free(buffer); // освобождаем память

		return 0;


}