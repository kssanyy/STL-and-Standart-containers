#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int n; 
    std::cin >> n;

    std::vector<int> result;
    std::unordered_set<int> repeats; 

    for (int i = 0; i < n; i++) {
        int numb; 
        std::cin >> numb;
        if (repeats.find(numb) == repeats.end()) {
            repeats.insert(numb);
            result.push_back(numb);
        };
    }

    for (int number : result) {
        std::cout << number << " ";
    }

    return 0;
}