#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string cleanString = "";
        for (char c : s) {
            if (isalnum(c)) {
                cleanString += tolower(c);
            }
        }
        return check_pd(cleanString, 0, cleanString.size() - 1);
    }
private:
bool check_pd(string& s, int left, int right){
    if(left >= right) return true;
    if(s[left] != s[right]) return false;
    return check_pd(s, left + 1, right - 1);
    }
};

int main(){
    Solution sol;
    string T1 = "race car";
    string T2 = "A man, a plan, a canal: Panama";
    bool ans;
    ans = sol.isPalindrome(T2);
    cout<<boolalpha;
    cout<<"Given String is a palindrome :"<<ans;
}