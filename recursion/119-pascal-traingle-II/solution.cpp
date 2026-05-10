#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        if(rowIndex == 0) return {1};

        vector<int>prevRow = getRow(rowIndex - 1);

        vector<int>currRow(rowIndex + 1, 1);
        
        for(int i = 1; i < rowIndex; i++){
            currRow[i] = prevRow[i - 1] + prevRow[i];
        }
        
        return currRow;
        
    }
};

int main() {
    // Instantiate the class (Create an object)
    Solution mySolver;

    int targetRow = 4;

    vector<int> result = mySolver.getRow(targetRow);

    cout << "Row " << targetRow << " is: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", "; 
    }
    cout << "]" << endl;

    return 0; 
}