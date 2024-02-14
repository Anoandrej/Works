// Lesson 19 Task 1

#include <iostream>
using namespace std;

class Fraction {

    int num;
    int den;
public:
    Fraction(int num, int den) {
        this->num = num;
        this->den = den;
    };
    void Print() {
        cout <<endl<< "Дробь " << num << "/" << den<<endl;
    }
    int operator ==(const Fraction & c) {
        return this->num == c.num && this->den == c.den;
    }
    int operator !=(const Fraction& c) {
        return (this->num != c.num) && (this->den != c.den);
    }
    int operator >(const Fraction & c) {
        return (this->num > c.num) && (this->den > c.den);
    }
    int operator <(const Fraction& c) {
        return (this->num < c.num) && (this->den < c.den);
    }
    int operator >=(const Fraction& c) {
        return (this->num >= c.num) && (this->den >= c.den);
    }
    int operator <=(const Fraction& c) {
        return (this->num <= c.num) && (this->den <= c.den);
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");

    int num1, num2, den1, den2;
    cout << "Введите знаменатель 1\n";
    cin >> num1;
    cout << "Введите числитель 1\n";
    cin >> den1;
    cout << "Введите знаменатель 2\n";
    cin >> num2;
    cout << "Введите числитель 2\n";
    cin >> den2;
    
    Fraction a(num1, den1);
    Fraction b(num2, den2);

    a.Print();
    b.Print();

    if (a == b) { cout << "\n1\n"; }
    else { cout << "\n0\n"; }
    if (a!=b) { cout << "\n1\n"; }
    else { cout << "\n0\n"; }
    if (a > b) { cout << "\n1\n"; }
    else { cout << "\n0\n"; }
    if (a < b) { cout << "\n1\n"; }
    else { cout << "\n0\n"; }
    if (a >= b) { cout << "\n1\n"; }
    else { cout << "\n0\n"; }
    if (a <= b) { cout << "\n1\n"; }
    else { cout << "\n0\n"; }
}

//Cоздай класс Fraction(обыкновенная дробь).Добавь конструктор, который будет принимать два целых числа и добавлять объекту атрибуты -
// числитель и знаменатель.Добавь метод print, который будет возвращать текстовое представление объекта в формате :
// «Дробь{ числитель } / {знаменатель}», например «Дробь 1 / 2».Переопредели методы сравнения == , != , > , <, >= , <= .
// Методы должны возвращать True или False.
//
//    Считай с клавиатуры четыре целых числа - числитель и знаменатель первой дроби и числитель и знаменатель второй дроби.
// Создай экземпляры класса Fraction с параметрами считанными с клавиатуры.Выведи результаты сравнения == , != , >, < , >= , <= этих дробей.
//
//    Входные данные :
//Вводится четыре строки, каждая строка содержит целое число - числитель и знаменатель первой дроби и числитель и знаменатель второй дроби.
//
//Выходные данные :
//Выводится 6 строк 1 или 0.
//
//Пример ввода :
//1
//2
//2
//3
//
//Пример вывода :
//0
//1
//0
//1
//0
//1
