#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int n = s.size();
        int maxLen = 0;
        unordered_map<char, int> lastIndex;
        for(int j = 0; j < n; j++){
            char c = s[j];

            if (lastIndex.count(c) && lastIndex[c] >= i) {
                i = lastIndex[c] + 1;
            }
            lastIndex[c] = j;
            maxLen = max(maxLen, j - i + 1);
        }
        return maxLen;
    }
};

int main(){
    Solution sol;
    string s1 = "abcabcbb";
    string s2 = "pwwkew";
    int len = sol.lengthOfLongestSubstring(s1);
    cout<<"Length Of longest common substring is: "<<len<<endl;
}