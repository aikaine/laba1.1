// laba1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    double x, y, z;
    setlocale(LC_ALL, "RU");
    cout << "Введите x: ";
    cin >> x;
    if (cin.fail())
    {
        cout << "Введите число" << endl;
        cin.clear();
        while (cin.get() != '\n');
        return 1;
    }

    cout << "Введите y: ";
    cin >> y;
    if (cin.fail())
    {
        cout << "Введите число" << endl;
        cin.clear();
        while (cin.get() != '\n');
        return 1;
    }


    z = x * sin(y) + sqrt(abs(x * y));
    cout << "Ответ: " << z;
    return 0;
}