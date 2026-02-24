#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // Safety check: if there are no intervals, 0 removals needed.
        if (intervals.empty()) return 0;

        // 1. Greedy Choice: Sort by End Time (a[1])
        // This ensures we always process the interval that finishes earliest.
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int count = 0;
        int n = intervals.size();
        
        // 2. last_end tracks the finish line of the last interval we kept.
        int last_end = intervals[0][1];

        for (int i = 1; i < n; i++) {
            // 3. If the next interval starts before the current one finishes...
            if (intervals[i][0] < last_end) {
                // ...it's a conflict! Increment the removal counter.
                count++;
            } 
            else {
                // ...no overlap! Keep this interval and update the finish line.
                last_end = intervals[i][1];
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard overlaps
    vector<vector<int>> intervals1 = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    
    // Test Case 2: The "Subset/Space Hogger" case we discussed
    vector<vector<int>> intervals2 = {{1, 10}, {4, 33}, {24, 555}, {4, 20}};

    cout << "--- Test Case 1 ---" << endl;
    cout << "Intervals: [1,2], [2,3], [3,4], [1,3]" << endl;
    cout << "Minimum removals: " << sol.eraseOverlapIntervals(intervals1) << " (Expected: 1)" << endl;

    cout << "\n--- Test Case 2 ---" << endl;
    cout << "Intervals: [1,10], [4,33], [24,555], [4, 20]" << endl;
    cout << "Minimum removals: " << sol.eraseOverlapIntervals(intervals2) << " (Expected: 2)" << endl;

    return 0;
}