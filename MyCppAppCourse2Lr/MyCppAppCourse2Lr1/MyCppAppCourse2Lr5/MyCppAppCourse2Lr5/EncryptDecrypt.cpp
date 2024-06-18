#include <iostream>
#include <string>
#include <fstream> // Для работы с открытием\записью\чтением\закрытием файлов
#include <conio.h>
#include <Windows.h>
#include <vector>
using namespace std;

// шифрование
string encrypt(string input) {
    vector <char> word(input.begin(), input.end());
    string key = "abcdefghijklmnopqrstuvwxyz"; // способ с другим ключом здесь на работет шифр только на английском алфавите

    for (int i = 0; i < (int)input.length(); i++) {
        for (int j = 0; j < (int)key.length(); j++) {
            if (word[i] == key[j]) {
                word[i] = key[(static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(j) + 3) % 26]; // MS visual ошибку выдал до этого была строка ->  word[i] = key[(j+3) %26];
                break;
            }

        }
    }
    string str(word.begin(), word.end());
    return str;

}

// расшифрование
string decrypt(string input) {
    vector <char> word(input.begin(), input.end());
    string key = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < (int)input.length(); i++) {
        for (int j = 0; j < (int)key.length(); j++) {
            if (word[i] == key[j]) {
                word[i] = key[(static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(j) - 3) % 26];// MS visual ошибку выдал до этого была строка ->  word[i] = key[(j-3) %26];
                break;
            }

        }
    }
    string str(word.begin(), word.end());
    return str;

}

int main() {
    setlocale(LC_ALL, "RU");

    //string text = "Uncopyrightable"; //   ----> Это мои тесты без участия файлов, только консоль
    //cout << text <<endl;

    //string url = decrypt("kwwsv://bdqgha.ux/");
    //cout << url << endl;

    //string textencrypt = encrypt(text);
    //cout << textencrypt << endl;

    //string textdecrypt = decrypt(textencrypt);
    //cout << textdecrypt << endl;


    string nameFile; // строка для названия файла
    cout << "Введите название файла: " << endl;
    cin >> nameFile;

    ifstream fout; // объект ifstream для чтения файла
    	fout.open(nameFile); // проверка на открытие файла
   
    	if (!fout.is_open())
    	{
    		cout << "Ошибка открытия файла!" << endl;
    	}
        else
        {
            cout << "Файл открыт!" << endl;
            string msg;
            while (!fout.eof()) // пока условие цикла true работает тело цикла -> там процесс считывания данных файла
            {
               msg = "";
                fout >> msg;
                cout << msg << endl;

            }
            cout << "\nФайл успешно прочитан!";

            string outFile = "myDecrypt.txt"; // стринг для файла куда будем записывать наши данные
            fstream fin;// объект типа fstream для записи
            fin.open(outFile, fstream::in | fstream::out | fstream::app); // присваиваем этому объекту все права, записи, чтения, добавления

            string textencrypt = encrypt(msg); // для расшифровки поменять encrypt на decrypt
            cout << textencrypt << endl;

            SetConsoleCP(1251); // параметром принимает кодировку в которой должна работать консоль тоесть наша кирилица
            fin << textencrypt << "\n";
            SetConsoleCP(866); // после записи в файл возвращаем поменняную кодировку выше в стандарнтое положение
   
    	}
    	fout.close();
   }




 
