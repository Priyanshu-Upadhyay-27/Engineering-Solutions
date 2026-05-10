#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k, string padding = "") {
        // Print the current function call entering the stack
        cout << padding << "--> Entering kthGrammar(n=" << n << ", k=" << k << ")" << endl;

        // 1. Base Case
        if (n == 1) {
            cout << padding << "    [Base Case Hit! Returning 0]" << endl;
            cout << padding << "<-- Exiting kthGrammar(n=1, k=1) with 0" << endl;
            return 0;
        }

        // 2. Calculate mid
        int mid = 1 << (n - 2);
        int result;

        // 3. The Leap of Faith
        if (k <= mid) {
            cout << padding << "    (Left half: k <= " << mid << ". Calling parent...)" << endl;
            result = kthGrammar(n - 1, k, padding + "      ");
            cout << padding << "<-- Exiting kthGrammar(n=" << n << ", k=" << k << ") returning " << result << endl;
            return result;
        } else {
            cout << padding << "    (Right half: k > " << mid << ". Calling parent and INVERTING...)" << endl;
            result = !kthGrammar(n - 1, k - mid, padding + "      ");
            cout << padding << "<-- Exiting kthGrammar(n=" << n << ", k=" << k << ") returning inverted " << result << endl;
            return result;
        }
    }
};

int main() {
    Solution mySolver;
    
    cout << "--- Building Recursion Tree for N=4, K=3 ---" << endl;
    int finalAnswer = mySolver.kthGrammar(4, 3);
    
    cout << "\nFinal Answer: " << finalAnswer << endl;
    
    return 0;
}