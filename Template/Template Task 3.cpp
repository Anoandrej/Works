// Template Task 3.cpp : 
#include <iostream>
#include <string>

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArr[] = { 1, 2, 3, 4, 5 };
    std::string strArr[] = { "apple", "banana", "cherry"};

    printArray(intArr, 5);

    printArray(strArr, 3);

    return 0;
}

//Создайте шаблонную функцию printArray, которая будет выводить элементы массива разных типов данных
// в консоль.
// Протестируйте функцию на массивах целых чисел и строк.
//
// Пример работы программы :
// Входные данные :
// { 1, 2, 3, 4, 5}
// { “apple", "banana", "cherry” }
// Выходные данные :
// 1 2 3 4 5
// apple banana cherry