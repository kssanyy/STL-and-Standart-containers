#include <iostream>

#include <string>
#include <stack>

int main() {
    int n;
    std::cin >> n;

    std::stack<int> history;

    for (int i = 0; i < n; i++) {
        std::string command;
        std::cin >> command;
        
        if (command == "add") {
            int x;
            std::cin >> x;
            history.push(x);
        }

        else if (command == "undo") {
            history.pop();
        }
        else if (command == "top") {
            std::cout << history.top() << std::endl; 
        }
    }

    return 0;
}