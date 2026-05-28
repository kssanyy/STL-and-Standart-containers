#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string command;
        std::cin >> command;

        if (command == "push") {
            int x;
            std::cin >> x;
            q.push(x);
        }

        else if (command == "pop") {
            q.pop();
        }

        else if (command == "front") {
            std::cout << q.front() << std::endl;
        }

        else if (command == "size") {
            std::cout << q.size() << std::endl;
        }
    }

    return 0;
}