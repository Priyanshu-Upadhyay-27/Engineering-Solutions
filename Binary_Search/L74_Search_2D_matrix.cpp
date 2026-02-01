#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int m = matrix.size(), n = matrix[0].size();
        int rl = 0, cl = 0, rh = m - 1, ch = n - 1, midr, midc, row;
        while(rl < rh){
            midr = rl + (rh - rl)/2;
            if(target <= matrix[midr][n - 1]) rh = midr;
            else rl = midr + 1;
        }
        row = rl;
        while(cl <= ch){
            midc = cl + (ch - cl)/2;
            if(target == matrix[row][midc]) return true;
            else if(target < matrix[row][midc]) ch = midc - 1;
            else cl = midc + 1;
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 34;

    if (sol.searchMatrix(matrix, target))
        cout << "Target found\n";
    else
        cout << "Target not found\n";

    return 0;
}