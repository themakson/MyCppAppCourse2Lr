#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void DoWork()
{
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tDowork\t" << i << endl; // get_ID выводит идентфификатор потока который сейчас работает в цифрах он всегда разный
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
}

int main()
{
	setlocale(LC_ALL, "RU");

	thread th(DoWork); // Это новый поток th. В скобочках () указатель на функцию которая будет выполнять параллельно

	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join(); // При создании объекта thread Обязательно должен быть ИЛИ th.join() который указывает что мы ждем другой поток ИЛИ th.detach() который не ждет другой поток и обрывается
	return 0;
}