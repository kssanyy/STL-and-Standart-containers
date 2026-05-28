#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack<char> st;
    map<char, char> brackets = {{')', '('}, {']', '['}, {'}', '{'}};
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') st.push(c);
        else if (c == ')' || c == ']' || c == '}') {
            if (st.empty() || st.top() != brackets[c]) {
                cout << "NO" << endl;
                return 0;
            }
            st.pop();
        }
    }   
    cout << (st.empty() ? "YES" : "NO");
}