#include <iostream>
#include <string>
#include <fstream> // ��� ������ � ���������\�������\�������\��������� ������
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    std::fstream in;                     // ������� �����
    in.open("myPoem.txt", std::ios::in);   // ��������� ���� ��� ������
    if (in)                              // ���� ���� ��������
    {
        std::string buf;                // ������� �����, ���� ����� ����������� ����������
        while (getline(in, buf))         //  ���� �� �������� ������ - ���� ����� ����������� ||  ����� ���� ���������� (��� ������ ���������) - ���� false
        {

        }
    }
    std::ofstream vmdelet_out;                    //������� ����� 
    vmdelet_out.open("myPoem.txt", std::ios::app);  // ��������� ���� ��� ������ � �����
    vmdelet_out << "\n" "  3  \n� ����� ������ ���������:\n"
        "������ ���� ������� ��,\n"
        "��� ���������� �������,\n"
        "��� ����� ������ �������.";        // ���� ������
    cout << "���������� ������ � ���� ������ �������!" << endl;
    vmdelet_out.close();                          // ��������� ����
    system("pause");
    return 0;
}