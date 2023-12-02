// Урок 5 Задание 5. Работа с массивом из 11 элементов

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a[11];
    for (int i = 0; i < 11; i++) {
        cout << "Введите элемент массива (a)" << i << endl;
        cin >> a[i];
    }
    for (int i = 0; i < 11; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 11; i+=2) {
        int b = a[i-1];
        a[i - 1] = a[i];
        a[i] = b;
        }
for (int i = 0; i < 11; i++) cout << a[i] << " ";
}