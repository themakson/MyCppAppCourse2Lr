#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void DoWork()
{
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID ������ = " << this_thread::get_id() << "\tDowork\t" << i << endl; // get_ID ������� �������������� ������ ������� ������ �������� � ������ �� ������ ������
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
}

int main()
{
	setlocale(LC_ALL, "RU");

	thread th(DoWork); // ��� ����� ����� th. � ��������� () ��������� �� ������� ������� ����� ��������� �����������

	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID ������ = " << this_thread::get_id() << "\tmain\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join(); // ��� �������� ������� thread ����������� ������ ���� ��� th.join() ������� ��������� ��� �� ���� ������ ����� ��� th.detach() ������� �� ���� ������ ����� � ����������
	return 0;
}