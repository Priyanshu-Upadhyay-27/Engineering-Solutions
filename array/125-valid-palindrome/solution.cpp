#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int left = 0, right = n - 1;
        while(left < right){
            if(!isalnum(s[left])){
                left++;
                continue;
            } 
            else if(!isalnum(s[right])){
                right--;
                continue;
            } 
            else{
                if(tolower(s[left]) != tolower(s[right])){
                    return false;
                }
            }
            left++;
            right--;
        }
        return true;
    }
};

int main(){
    Solution sol;
    string T1 = "race a car";
    bool ans;
    ans = sol.isPalindrome(T1);
    cout<<boolalpha;
    cout<<"Given String is a palindrome :"<<ans;
}