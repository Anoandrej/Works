// Lesson 1  Task 5.cpp Число положительное и четное.
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout << "Введи число:\n";
    std::cin >> num;
    if (num>0&&num % 2 == 0) {
        std::cout << "Число " << num << " подходит.\n";
    }
}