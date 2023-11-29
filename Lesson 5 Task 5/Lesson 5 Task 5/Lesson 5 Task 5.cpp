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
    for (int i = 0; i < 11; i++) {
        for (int j = 11; j > 0; j--) {
            int c = a[i];
            a[i] = a[j];
            a[j] = c;
            }
        }
for (int i = 0; i < 11; i++) {
    cout << a[i] << " ";
}
}