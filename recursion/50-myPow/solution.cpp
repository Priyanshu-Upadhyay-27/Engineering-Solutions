#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if(n < 0){
            return 1/(x * myPow(x, -(n + 1)));
        }
        return x * myPow(x, n - 1);
    }
};

int main() {
    // Instantiate the class (Create an object)
    Solution mySolver;

    double base = 2.0;
    int exponent = 10;

    double result = mySolver.myPow(base, exponent);

    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0; 
}