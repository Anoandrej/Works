// Lesson 17 TAsk 4

#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251>nul");

    string str1, str2, result;
    cout << "Первая строка:\n";
    cin >> str1;
    cout << "Вторая строка:\n";
    cin >> str2;
    result = str1 + " " + str2;
    cout << result;
}

//Напишите программу, которая запрашивает ввод с клавиатуры двух строковых значений(в новых строках).
//Программа должна склеить введенные строки, вставив между ними пробел и вывести на экран.