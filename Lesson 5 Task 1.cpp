// Урок 5 Задание 1. Вывод элементов с четными идексами.

#include <iostream>
using namespace std;

int main()
{
    int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            cout << a[i] << endl;
        }
    }
}