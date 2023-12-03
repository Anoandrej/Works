// Урок 5 Задание 4. Массив из 20 элементов, заполненных квадратами чисел.

#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int b;
    for (int i = 0; i < 20; i++) {
        b = (i+1) * (i+1);
            a[i]=b;
            cout << a[i] << " ";
    }
}