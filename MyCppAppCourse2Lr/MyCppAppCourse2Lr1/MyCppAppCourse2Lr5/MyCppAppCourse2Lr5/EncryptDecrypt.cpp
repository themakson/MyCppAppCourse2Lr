#include <iostream>
#include <string>
#include <fstream> // ��� ������ � ���������\�������\�������\��������� ������
#include <conio.h>
#include <Windows.h>
#include <vector>
using namespace std;

// ����������
string encrypt(string input) {
    vector <char> word(input.begin(), input.end());
    string key = "abcdefghijklmnopqrstuvwxyz"; // ������ � ������ ������ ����� �� ������� ���� ������ �� ���������� ��������

    for (int i = 0; i < (int)input.length(); i++) {
        for (int j = 0; j < (int)key.length(); j++) {
            if (word[i] == key[j]) {
                word[i] = key[(static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(j) + 3) % 26]; // MS visual ������ ����� �� ����� ���� ������ ->  word[i] = key[(j+3) %26];
                break;
            }

        }
    }
    string str(word.begin(), word.end());
    return str;

}

// �������������
string decrypt(string input) {
    vector <char> word(input.begin(), input.end());
    string key = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < (int)input.length(); i++) {
        for (int j = 0; j < (int)key.length(); j++) {
            if (word[i] == key[j]) {
                word[i] = key[(static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(j) - 3) % 26];// MS visual ������ ����� �� ����� ���� ������ ->  word[i] = key[(j-3) %26];
                break;
            }

        }
    }
    string str(word.begin(), word.end());
    return str;

}

int main() {
    setlocale(LC_ALL, "RU");

    //string text = "Uncopyrightable"; //   ----> ��� ��� ����� ��� ������� ������, ������ �������
    //cout << text <<endl;

    //string url = decrypt("kwwsv://bdqgha.ux/");
    //cout << url << endl;

    //string textencrypt = encrypt(text);
    //cout << textencrypt << endl;

    //string textdecrypt = decrypt(textencrypt);
    //cout << textdecrypt << endl;


    string nameFile; // ������ ��� �������� �����
    cout << "������� �������� �����: " << endl;
    cin >> nameFile;

    ifstream fout; // ������ ifstream ��� ������ �����
    	fout.open(nameFile); // �������� �� �������� �����
   
    	if (!fout.is_open())
    	{
    		cout << "������ �������� �����!" << endl;
    	}
        else
        {
            cout << "���� ������!" << endl;
            string msg;
            while (!fout.eof()) // ���� ������� ����� true �������� ���� ����� -> ��� ������� ���������� ������ �����
            {
               msg = "";
                fout >> msg;
                cout << msg << endl;

            }
            cout << "\n���� ������� ��������!";

            string outFile = "myDecrypt.txt"; // ������ ��� ����� ���� ����� ���������� ���� ������
            fstream fin;// ������ ���� fstream ��� ������
            fin.open(outFile, fstream::in | fstream::out | fstream::app); // ����������� ����� ������� ��� �����, ������, ������, ����������

            string textencrypt = encrypt(msg); // ��� ����������� �������� encrypt �� decrypt
            cout << textencrypt << endl;

            SetConsoleCP(1251); // ���������� ��������� ��������� � ������� ������ �������� ������� ������ ���� ��������
            fin << textencrypt << "\n";
            SetConsoleCP(866); // ����� ������ � ���� ���������� ���������� ��������� ���� � ����������� ���������
   
    	}
    	fout.close();
   }




 
