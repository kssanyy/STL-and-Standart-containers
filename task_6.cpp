#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;

    std::map<int, int> numbersCount;

    for (int i = 0; i < n; i++) {
        int numb;
        std::cin >> numb;

        numbersCount[numb]++;
    }

    int maxCount = 0;
    int maxFreqNum = 0;
    for (const auto& [numb, count] : numbersCount) {
        if (count > maxCount) {
            maxCount = count;
            maxFreqNum = numb;
        }
    }

    std::cout << maxFreqNum << std::endl;

    return 0;
}