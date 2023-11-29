// Урок 4 Задание 7. Вывод делителей числа

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    cout << "Введите целое число:\n";
    cin >> num;
    cout << "Делители введенного числа:\n";
    for (int i = 1; i <= num; i++) {
        if (num%i ==0) {
            cout << i << " ";
        }
    }
}