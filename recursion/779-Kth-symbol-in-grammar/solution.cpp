#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        
        if(n == 1) return 0;

        int mid = pow(2, n-2);

        if(k <= mid){
            return kthGrammar(n - 1, k);
        }
        else{
            return !kthGrammar(n - 1, k - mid);
        }
    }
};

int main(){
    Solution sol;
    int n = 4, k = 5;
    int val = sol.kthGrammar(n, k);
    cout<<"Value at "<<n<<"th row and "<<k<<"th column is :"<<val<<endl;
    return 0;

}