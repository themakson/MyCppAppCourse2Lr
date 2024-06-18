// пример использовани€ функции calloc
#include <iostream>;
#include <cstdlib>;
using namespace std;

int main(){
	setlocale(LC_ALL, "RU");

	int size;

	cout << ("¬ведите количество элементов: ");
	cin >> size;
	int* arrayPtr = (int*)calloc(size, sizeof(int));// выдел€ем пам€ть под динамический массив целых чисел 

	if (arrayPtr == NULL) exit(1); // завершить работу программы если массив 0

	for (int i = 0; i < size; i++) // в цикле заполн€ем массив
	{
		cout << ("¬ведите число: ");
		cin >> arrayPtr[i];
	}

	cout << "¬веденные числа: ";
	for (int i = 0; i < size; i++) // в цикле выводим элементы массива на стандартное устройство вывода
		cout << arrayPtr[i] << " ";
	free(arrayPtr); // удал€ем динамический массив чисел
	return 0;

}
// ¬џ¬ќƒ : calloc выдел€ет пам€ть под массив данных, предварительно инициализиру€ еЄ нул€ми. принимает 2 аргумента.
// malloc выдел€ет пам€ть без инициализации.принимает один аргумент.