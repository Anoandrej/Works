// Lesson 1  Task 4.cpp Число кратное 5
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout << "Введи число:\n";
    std::cin >> num;
    if (num %10==5) {
        std::cout << "Число " << num << " заканчивается на 5.\n";
    }
}