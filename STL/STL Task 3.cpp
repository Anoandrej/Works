// STK Task 3
#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> browserHistory;
    std::string input;

    while (true) {
        std::cout << "Enter the URL you visited (or 'exit' to quit): ";
        std::cin >> input;

        if (input == "exit") {
            break;
        }

        browserHistory.push_back(input);
    }

    std::cout << "\nBrowser History:\n";
    for (const auto& url : browserHistory) {
        std::cout << url << "\n";
    }

    return 0;
}