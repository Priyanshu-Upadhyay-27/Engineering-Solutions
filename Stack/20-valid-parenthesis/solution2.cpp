#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s.length() % 2 != 0) return false;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(')');
            }
            else if (s[i] == '[') {
                st.push(']');
            }
            else if (s[i] == '{') {
                st.push('}');
            }
            else {
                if (st.empty() || st.top() != s[i]) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;

    string tests[] = {"()", "{[]}", "(]"};
    bool expected[] = {true, true, false};

    for (int i = 0; i < 3; i++) {
        bool result = sol.isValid(tests[i]);
        cout << "Test " << i + 1 << ": \"" << tests[i] << "\" -> "
             << (result ? "true" : "false")
             << " (expected " << (expected[i] ? "true" : "false") << ") "
             << (result == expected[i] ? "PASS" : "FAIL") << endl;
    }
    
    string extra[] = {"]]", "((", "())", "()))"};
    bool extraExpected[] = {false, false, false, false};

    cout << "\nExtra edge cases:" << endl;
    for (int i = 0; i < 4; i++) {
        bool result = sol.isValid(extra[i]);
        cout << "\"" << extra[i] << "\" -> "
             << (result ? "true" : "false")
             << " " << (result == extraExpected[i] ? "PASS" : "FAIL") << endl;
    }

    return 0;
}