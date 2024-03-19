// Template Task 1

#include <iostream>

template <typename T, typename U>
class Pair {
    T first;
    U second;
public:
    Pair(T first, U second) : first(first), second(second) {}

    T First() {return first;}

    U Second() {return second;}
};

int main() {
    Pair<int, double> pair1(1, 3.14);
    Pair<std::string, char> pair2("Hello", 'H');

    std::cout << "Pair 1: " << pair1.First() << ", " << pair1.Second() << std::endl;
    std::cout << "Pair 2: " << pair2.First() << ", " << pair2.Second() << std::endl;

    return 0;
}
// Задача 1: Реализуйте шаблонный класс Pair, который будет хранить пару значений разных типов.
// Добавьте методы для получения первого и второго значения.
// Создайте объекты класса Pair с разными типами данных и выведите их значения.
// Пример работы программы :
// Входные данные :
// 1, 3.14
// “Hello”, ‘H’
// Выходные данные :
// First element of int - double pair : 1
// Second element of str - char pair : H
