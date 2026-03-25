#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int s = n*(n+1)/2;
        int x = sqrt(s);
        if(s != (x*x)) return -1;
        return x;
    }
};

int main(){
    Solution sol;
    int n = 8;
    int x = sol.pivotInteger(n);
    cout<<"The pivot element is : "<< x;
    return 0;
}