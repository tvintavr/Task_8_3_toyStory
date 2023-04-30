#include <iostream>
#include <cmath>
#include <windows.h>
#include <limits>
#include <numeric>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    /* Проверка ввода данных (справочно)
    while(true)
    {
        float value; // попробуйте разные типы данных
        std::cin >> value;

        if (std::cin.fail() || std::cin.peek() != '\n')
        {
            std::cerr << "Ошибка ввода данных\n";

            // Данные две строки необходимы для очистки буфера ввода, без них, при последующем вводе данных, произойдёт зацикливание:
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Если нужно прервать программу:
            // return 1; // выход из функции main, соответственно и из программы
            // exit(1); // а так можно выйти из программы в любом месте
            // цифры - это номера ошибок передаваемые программой в ОС,
            // 0 - всё хорошо, не 0 - какой-то код, который разработчик устанавливает сам...
        }
        else
            std::cout << value << '\n';
    }

    return 0;
     */
    float length;
    float width;
    float height;
    int num1;
    int num2;
    int num3;
    int num;

    while (true) {
        std::cout<<"Введите длину бруска, см(>=5): ";
        std::cin>>length;
        std::cout<<"Введите ширину бруска, см(>=5): ";
        std::cin>>width;
        std::cout<<"Введите высоту бруска, см(>=5): ";
        std::cin>>height;
        if (length<5 || width<5 || height<5 || std::cin.fail() || std::cin.peek() != '\n') {
            std::cout<<"Ошибка ввода данных\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        } else {
            num1=(int) (length/5);
            num2=(int) (width/5);
            num3=(int) (height/5);
            num=num1*num2*num3;
            std::cout<<"Из бруска "<<length<<"x"<<width<<"x"<<height<<" можно изготовить "<<num<<" кубиков.\n";
        }
    }
}