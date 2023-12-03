// Урок 1 Задание 1. "Уроки сделаны?".

#include <iostream>
using namespace std;

int main()
{
    char a;
    setlocale(LC_ALL, "Russian");
    cout << "Уроки сделаны?\n";
    cin >> a;
    if (a = 'y') {
        cout << "Молодец!\n";
    }
}