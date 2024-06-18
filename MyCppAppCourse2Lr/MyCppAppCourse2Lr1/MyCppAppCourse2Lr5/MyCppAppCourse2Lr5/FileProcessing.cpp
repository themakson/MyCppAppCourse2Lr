#include <iostream>
#include <string>
#include <fstream> // Для работы с открытием\записью\чтением\закрытием файлов
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    std::fstream in;                     // создаем поток
    in.open("myPoem.txt", std::ios::in);   // открываем файл для чтения
    if (in)                              // если файл открылся
    {
        std::string buf;                // создаем буфер, куда будет считываться информация
        while (getline(in, buf))         //  Пока мы получили строку - тело цикла исполняется ||  когда файл закончился (все строки считались) - цикл false
        {

        }
    }
    std::ofstream vmdelet_out;                    //создаем поток 
    vmdelet_out.open("myPoem.txt", std::ios::app);  // открываем файл для записи в конец
    vmdelet_out << "\n" "  3  \nЯ помню чудное мгновенье:\n"
        "Передо мной явилась ты,\n"
        "Как мимолетное виденье,\n"
        "Как гений чистой красоты.";        // сама запись
    cout << "Добавление записи в файл прошло успешно!" << endl;
    vmdelet_out.close();                          // закрываем файл
    system("pause");
    return 0;
}