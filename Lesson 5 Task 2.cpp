// Урок 5 Задание 2. Вывод в обратном порядке элементов с нечетными идексами.

#include <iostream>
using namespace std;

int main()
{
    int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
    for (int i = 9; i > 0; i--) {
        if (i % 2 != 0) {
            cout << a[i] << " ";
        }
    }
}