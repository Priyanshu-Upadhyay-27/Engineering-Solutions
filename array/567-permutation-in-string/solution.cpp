#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left = 0;
        int need[26] = {0};
        int window[26] = {0};
        
        for (char c : s1) {
            need[c - 'a']++;
        }
        
        for (int right = s1.length() - 1; right < s2.length(); right++) {
            if (right == s1.length() - 1) {
                for (int i = 0; i <= s1.length() - 1; i++) window[s2[i] - 'a']++;
            } else {
                window[s2[right] - 'a']++;
                window[s2[left] - 'a']--;
                left++;
            }
            
            if (std::equal(need, need + 26, window)) {
                return true;
            }
        }
        
        return false;  
    }
};

int main() {
    Solution sol;
    
    
    
    return 0;
}