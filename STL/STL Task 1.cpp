// STL Task 1

#include <iostream>
#include <string>
#include <set>

int countUniqueWords(const std::string& sentence) {
    std::string word = "";
    std::set<std::string> uniqueWords;

    for (char c : sentence) {
        if (c == ' ' || c == '.' || c == ',') {
            if (!word.empty()) {
                uniqueWords.insert(word);
                word = "";
            }
        }
        else {
            word += c;
        }
    }

    if (!word.empty()) {
        uniqueWords.insert(word);
    }

    return uniqueWords.size();
}

int main() {
    std::string sentence = "this is a test sentence to test unique words";
    int uniqueWordCount = countUniqueWords(sentence);

    std::cout << "Number of unique words in the sentence: " << uniqueWordCount << std::endl;

    return 0;
}
// Задача 1 : Напишите функцию, которая подсчитывает количество уникальных слов в предложении с использованием множества.
//
// Пример работы программы :
// Входные данные :
// "this is a test sentence to test unique words"
// Выходные данные :
// Number of unique words : 8открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
