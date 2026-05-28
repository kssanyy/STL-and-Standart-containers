#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main() {
    int n1, n2;
    
    std::cin >> n1;
    std::set<int> set1;
    for (int i = 0; i < n1; i++) {
        int x;
        std::cin >> x;
        set1.insert(x);
    }

    std::cin >> n2;
    std::set<int> set2;
    for (int i = 0; i < n2; i++) {
        int x;
        std::cin >> x;
        set2.insert(x);
    }
    
    std::vector<int> result;
    std::set_intersection(set1.begin(), set1.end(),
                          set2.begin(), set2.end(),
                          std::back_inserter(result));
    
    for (int x : result) {
        std::cout << x << " ";
    }
    
    return 0;
}