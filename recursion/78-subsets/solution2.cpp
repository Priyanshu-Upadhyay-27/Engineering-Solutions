#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(string ip, string op){
        if(ip.size() == 0){
            cout << "{";
            for (int i = 0; i < op.size(); i++) {
                cout << op[i];
                if (i + 1 < op.size()) {
                    cout << ", ";
                }
            }
            cout << "} ";
            return;
        }
        string op1 = op;
        string op2 = op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        solve(ip, op1);
        solve(ip, op2);
}
public:
    void subsets(vector<int>& nums) {
        string input;
        for (int num : nums) {
            input.push_back(char('0' + num));
        }
        solve(input, "");
    }
};
int main(){
    Solution s;
    vector<int> arr = {1,2,3};
    s.subsets(arr);
}