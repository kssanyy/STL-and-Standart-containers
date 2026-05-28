#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> result;
    std::set<int> numbers;
    for (int i = 0; i < n; i++) {
        int numb;
        std::cin >> numb;
        if (numbers.find(numb) == numbers.end()) {
            numbers.insert(numb);
            result.push_back(numb);
        }
    }
    std::sort(result.begin(), result.end());
    std::cout << result[result.size() - 2];

    return 0;
}