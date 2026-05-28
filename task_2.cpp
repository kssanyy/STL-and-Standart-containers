#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::map<std::string, int> wordCount;
    for (int i = 0; i < n; i++) {
        std::string word;
        std::cin >> word;

        wordCount[word]++;
    }

    for (const auto& [word, count] : wordCount) {
        std::cout << word << ' ' << count << std::endl;
    }

    return 0;
}