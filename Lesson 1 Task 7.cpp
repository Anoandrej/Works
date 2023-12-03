// Lesson 1  Task 7.cpp Треугольник существует?
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    std::cout << "Введи длинну первой стороны:\n";
    std::cin >> a;
    std::cout << "Введи длинну второй стороны:\n";
    std::cin >> b;
    std::cout << "Введи длинну третьей стороны:\n";
    std::cin >> c;
    if (a + b <= c || (b + c <= a) || a + c <= b) {
        std::cout << "Треугольник не сущестует.\n";
    }
}