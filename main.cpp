#include <iostream>
#include <cmath>

/*namespace MyValue { // собственное пространство имен
    int value(10);
}
*/

// using namespace std; // убираем std перед всеми объектами, относящимися к std.

// все задачи в системах на ПК выполняюся в формате FILO (First In Last Out) - первая пришла, последняя вышла (Это называется СТЕК - крутая штука)
// :: - операция разрешения области видимости.
// можно писать отдельно using std::cout, using std::cin и тп., но мне не настолько нечего делать, чтобы все это отдельно писать, поэтому пишем using namespace std.
// int valueGlobal = 10; - глобальная переменная, если ее писать вне функций. А локальные переменные - это переменные внутри блоков
// локальные переменные автоматически уничтожаются по завершении блока.
// все что до функции main называется глобальным пространством имен

/*int main(int agrc, char** argv) // main - это точка входа в программу, поэтому мы также прописываем количество аргументов и строку строк для того, чтобы указывать файлы для программы.
{
    int value(0); // объявляем и присываиваем int число 0
    string hello = "Hello, World"; // объявляем объект string и присваиваем нашу строку.
    cout<<hello<<"\n"; // выводим в output с помощью cout и переходим на следующую строку \n
    cout<<value<<"\n"; // выводим value

    return 0; // завершение программы.
}*/


// Условные операторы

/*int main() {
    int value1, value2;

    std::cout<<"Введите первое число: ";
    std::cin>>value1;
    std::cout<<"Введите второе число: ";
    std::cin>>value2;

   if (value1 > value2) {
       std::cout<<"value1 > value2"<<"\n";
   }

    else if (value1 < value2) {
        std::cout<<"value2 > value1"<<"\n";
    }

    else {
        std::cout<<"value1 = value2"<<"\n";
    }
    return 0;
}
*/

/*
bool func2(int value1, int value2) {
    if (value1 % value2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool func1(int value) {
    if (value % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
*/
// 1. функция 1 проверят четное или нечетное число
// 2. функция 2 проверят делится ли 1 число на 2 число
// 3. вывести или создать таблицу кода с соответсвующии символами, либо для латиницы, либо для кириллицы

/*
int main()
{
    int value1, value2;
    std::cout<<"Введите первое число: ";
    std::cin>>value1;
    std::cout<<"Введите второе число (!= 0): ";
    std::cin>>value2;
    if (value2 == 0)
    {
        std::cout<<"Второе число должно быть неравным 0!!"<<"\n"<<"\n";
    }
    else
    {
        bool res1 = func1(value1);
        if (res1)
        {
            std::cout<<"1 число - Четное"<<"\n"<<"\n";
        }
        else
        {
            std::cout<<"1 число - Нечетное"<<"\n"<<"\n";
        }

        bool res2 = func2(value1, value2);
        if (res2)
        {
            std::cout<<"value1 делится целочисленно на value2"<<"\n"<<"\n";
        }
        else
        {
            std::cout<<"value1 не делится целочисленно на value2"<<"\n"<<"\n";
        }


        char str1[] = "abcdefghijklmnopqrstuvwxyz";
        char str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        std::cout<<"Коды английских прописных символов: ";
        for (char i : str1)
        {
            if (static_cast<int>(i) != 0)
            {
                std::cout<<i<<"-"<<static_cast<int>(i)<<" ";
            }
        }
        std::cout<<"\n";
        std::cout<<"Коды английских заглавных символов: ";
        for (char i : str2)
        {
            if (static_cast<int>(i) != 0)
            {
                std::cout<<i<<"-"<<static_cast<int>(i)<<" ";
            }
        }
    }
    return 0;
}
*/

// Исползование констант
// Литерал - необъявленная константа, которая испольуется для присвоения переменных, объявленных констант, для передачи практических параметров в функции
// Типы литералов: 1.Целочисленные

using namespace std;
/*
int main() {
    const double PI = acos(-1.0);
    cout<<sizeof(int)<<"\n";
    cout<<sizeof(long int)<<"\n";
    cout<<sizeof(double)<<"\n";
    cout<<sizeof(long double)<<"\n";
    cout<<"\n";
    cout<<sizeof(PI);
    return 0;
}
*/

//  рекурсивная функция для подсчета факториала
long long factorial(long long num) {
    if (num == 0) {
        return 1ll;
    }
    if (num == 1ll) {
        return 1ll;
    }
    return num * factorial(num - 1ll);
}

int main()
{
    for (int i = 0; i < 11; i++) {
        std::cout<<"Факториал числа "<<i<<" = "<<factorial(i)<<"\n";
    }
    return 0;
}

