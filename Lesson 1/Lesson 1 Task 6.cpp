// Lesson 1  Task 6.cpp Число положительное и четное.
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout << "Введи количество очков:\n";
    std::cin >> num;
    if (num >= 10) {
        std::cout << "Ты победил.\n";
    }
}