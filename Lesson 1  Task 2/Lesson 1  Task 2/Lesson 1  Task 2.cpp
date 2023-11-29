// Lesson 1  Task 2.cpp Отрицательное число?
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout << "Введи число:\n";
    std:: cin >> num;
    if (num < 0) {
        std::cout << "Число " << num << " отрицательное\n";
    }
}