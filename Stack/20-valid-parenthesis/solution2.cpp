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
    
}