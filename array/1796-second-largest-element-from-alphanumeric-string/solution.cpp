#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int first = -1;
        int second = -1;
        for (auto c : s) {
            if (isdigit(c)) {
                int digit = c - '0';
                if (digit > first) {
                    second = first;
                    first = digit;
                }
                else if (digit < first && digit > second) {
                    second = digit;
                }
            }
        }
        return second;
    }
};

int main() {
    Solution sol;
    string s = "dfa1245321afd";
    int second_largest;
    second_largest = sol.secondHighest(s);
    cout<<"Second Highest Element is:"<<second_largest<<endl;
    return 0;
}