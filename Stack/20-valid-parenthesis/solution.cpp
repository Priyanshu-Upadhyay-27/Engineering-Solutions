#include<stack>
#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else if(s[i] == '}'){
                if(st.empty()) return false;
                if(st.top() == '{') st.pop();
                else return false;
            }
            else if(s[i] == ')'){
                if(st.empty()) return false;
                if(st.top() == '(') st.pop();
                else return false;
            }
            else if(s[i] == ']'){
                if(st.empty()) return false;
                if(st.top() == '[') st.pop();
                else return false;
            }
        }
        if (st.empty()) return true;
        else return false;
    }
};
int main(){
    Solution s;
    string brac = "{({[()]})}";
    bool result = s.isValid(brac);
    cout<<"The string passed is "<<boolalpha<<result<<endl;
}