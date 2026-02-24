#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {}; 
        
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());
        
        int n = intervals.size();
        result.push_back(intervals[0]);
        
        for(int i = 1; i < n; i++) {
            if(result.back()[1] >= intervals[i][0]) {
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            }
            else {
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> intervals1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    
    cout << "Intervals before merging overlaps are: " << endl;
    for(const auto& row : intervals1) {
        
        cout << "[" << row[0] << ", " << row[1] << "] ";
    }
    cout << endl;

    vector<vector<int>> results1 = sol.merge(intervals1);

    cout << "Intervals after merging overlaps are: " << endl;
    for(const auto& row : results1) {
       
        cout << "[" << row[0] << ", " << row[1] << "] ";
    }
    cout << endl;

    return 0;
}