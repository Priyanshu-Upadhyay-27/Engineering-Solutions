#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op, set<string>& ans){
    if(ip.length() == 0){
        ans.insert(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    solve(ip, op1, ans);
    solve(ip, op2, ans);

}

int main() {
    string input = "abc";
    set<string> ans;
    
    solve(input, "", ans); 

    cout << "Unique subsets are:" << endl;
    for (const string& s : ans) {
        cout << s << endl;
    }

    return 0;
}