// Lesson 20 Task 1.

#include <iostream>
#include <exception>
using namespace std;


double Foo(double a, double b) {
    try {
        if (b == 0)
            throw std::exception("На ноль делить нельзя.");
           }
    catch (std::exception& ex) {
        cout << ex.what();
    }
    return a / b;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c;
    cout << "Введите первое число\n";
    cin >> a;
    cout<<"Введите второе число\n";
    cin >> b;

    cout <<endl<< Foo(a, b)<<endl;

    return 0;
}

//Напишите программу, которая запрашивает ввод с клавиатуры двух целых чисел(в отдельных строках).
//Напиши функцию, которая возвращает частное двух введенных чисел, при этом реализуй проверку деления на 0 с помощью исключений.
//Для обработки исключений используй класс exception, который определен в заголовочном файле <exception>.
//С помощью метода what() в блоке catch получи переданное сообщение и выведи его на экран.
//Если исключение не возникло, программа должна вывести результат работы функции(частное).