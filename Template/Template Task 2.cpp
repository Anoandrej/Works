// Template Task 2

#include <iostream>
#include <string>
#include <vector>

template <typename T>
int countOccurrences(const std::vector<T>& arr, const T& element) {
    int count = 0;
    for (const T& item : arr) {
        if (item == element) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> intArr = { 1, 2, 2, 3, 2, 4 };
    int intElement = 2;
    std::cout << "Occurrences of " << intElement << " in int array: " << countOccurrences(intArr, intElement) << std::endl;

    std::vector<std::string> strArr = { "apple", "banana", "apple", "cherry" };
    std::string strElement = "apple";
    std::cout << "Occurrences of " << strElement << " in str array: " << countOccurrences(strArr, strElement) << std::endl;

    return 0;
}

//Задача 2: Напишите шаблонную функцию countOccurrences, которая будет подсчитывать количество вхождений
// элемента в массив разных типов данных.
// Протестируйте функцию на массивах целых чисел и строк.
//
//Пример работы программы :
//Входные данные :
//{1, 2, 2, 3, 2, 4}
//{ “apple”, ”banana”, “apple”, “cherry” }
//Выходные данные :
//Occurrences of 2 in int array : 3
//Occurrences of apple in str array : 2