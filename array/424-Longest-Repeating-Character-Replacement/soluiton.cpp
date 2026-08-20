#include<iostream>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0;
        int ct[26] = {0};
        int n = s.size() - 1;
        int maxFreq = 0;
        int windowSize = 0;
        int best = 0;
        for(right; right <= n; right++){
            ct[s[right] - 'A']++;
            maxFreq = max(maxFreq, ct[s[right] - 'A']);
            windowSize = right - left + 1;
            if(windowSize - maxFreq > k){
                ct[s[left] - 'A']--;
                left++;
            }
            best = max(best, right - left + 1);
        }
        return best;
    }
};

int main(){
    Solution sol;
    
}