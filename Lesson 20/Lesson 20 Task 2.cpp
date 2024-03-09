// Lesson 20 Task 2

#include <iostream>
#include <cstring>

using namespace std;

class MinLengthPasswordError : public std::exception {
public:
    virtual const char* what() const throw() {
        return " Короткий пароль";
    }
};

class NoSpecialCharactersError : public std::exception {
public:
    virtual const char* what() const throw() {
        return " Нет специального символа";
    }
};

bool checkPassword(const std::string& password) {
    if (password.length() < 6) {
        throw MinLengthPasswordError();
    }

    bool hasSpecialCharacter = false;
    for (char c : password) {
        if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*' ||
            c == '(' || c == ')' || c == '<' || c == '>' || c == '?' || c == ',' || c == '.') {
            hasSpecialCharacter = true;
            break;
        }
    }

    if (!hasSpecialCharacter) {
        throw NoSpecialCharactersError();
    }

    return true;
}

int main() {
	system("chcp 1251>nul");

	char password[100];
	cout << "Введите пароль: \n";
	cin.getline(password,200);
	cout << password;

    try {
        if (checkPassword(password)) {
            cout << "Пароль : " << password << endl;
        }
    }
    catch (MinLengthPasswordError& e) {
        cout << e.what() << endl;
    }
    catch (NoSpecialCharactersError& e) {
        cout << e.what() << endl;
    }

    return 0;
}

//Напиши программу, которая запрашивает ввод с клавиатуры строки(пароля) и выполняет проверку корректности пароля.
//Корректный пароль должен иметь длину не менее 6 символов, а также включать в себя хотя бы один знак из набора !@#$%^&* () < > ? , . символов.
//Если пароль корректен, то он выводится на экран.В противном случае вызывается одно из собственных исключений MinLengthPasswordError
//(не выполнено условие минимальной длины) или NoSpecialCharactersError(нет символа из набора).
//
//Считай с клавиатуры одну строку - пароль.Если он корректный - выведи на экран текст «Пароль : {password}», например «Пароль : {12345678@}».
//Если пароль некорректный, то с помощью вызова исключений MinLengthPasswordError или NoSpecialCharactersError
//выведи на экран текст «Короткий пароль» или «Нет специального символа».Сначала проверяется условие необходимой длины,
//если оба условия ложны, то выводится одно сообщение - «Короткий пароль».
//
//При написании кода программы используй обработку исключений.Создай собственные исключения MinLengthPasswordError и NoSpecialCharactersError.
//Входные данные :
//Вводится одна строка - пароль.
//
//Выходные данные :
//Выводится строка «Пароль : {password}» или строка «Короткий пароль» или «Нет специального символа».
//
//Пример ввода :
//1234
//
//Пример вывода :
//Короткий пароль
//
//Пример ввода :
//12345678
//
//При написании кода программы используй обработку исключений.
// Создай собственные исключения MinLengthPasswordError и NoSpecialCharactersError.