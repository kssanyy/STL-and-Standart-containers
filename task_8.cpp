#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, k;

    std::vector<int> numbers;

    std::cin >> n;
    std::cin >> k;

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        numbers.push_back(x);
    }
    std::sort(numbers.begin(), numbers.end());
    std::cout << numbers[k - 1];
    
    return 0;
}