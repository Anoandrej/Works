// Lesson 1  Task 2.cpp Число четное?
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout << "Введи число:\n";
    std::cin >> num;
    if (num %2==0) {
        std::cout << "Число " << num << " четное\n";
    }
}