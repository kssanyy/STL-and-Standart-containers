#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int len_1, len_2;

    std::vector<int> numbers_1;
    std::vector<int> numbers_2;

    std::cin >> len_1;
    std::cin >> len_2;

    for (int i = 0; i < len_1; i++) {
        int n;
        std::cin >> n;
        numbers_1.push_back(n);
    }

    for (int i = 0; i < len_2; i++){
        int n;
        std::cin >> n;
        numbers_2.push_back(n);
    }

    std::sort(numbers_1.begin(), numbers_1.end());
    std::sort(numbers_2.begin(), numbers_2.end());
    
    std::vector<int> result(numbers_1.size() + numbers_2.size());

    std::merge(numbers_1.begin(), numbers_1.end(), 
               numbers_2.begin(), numbers_2.end(), 
               result.begin());

    for (int x : result) {
        std::cout << x << " ";
    }

    return 0;
}