#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(int i, vector<int>& nums, vector<int>& currSubset, vector<vector<int>>& result) {
    
    // 1. THE LEAF NODES (Bottom of the tree)
    // If our index has reached the end of the array, we can't go any deeper.
    // We save our current path and stop going down.
    if (i == nums.size()) {
        result.push_back(currSubset);
        return; // "RETURN" literally means "climb back up one level"
    }
    
    // 2. GOING LEFT (The "Not Take" Branch)
    // We do absolutely nothing to our array, and just tell the computer 
    // to move to the next index (i + 1). 
    solve(i + 1, nums, currSubset, result); 
    
    // ---------------------------------------------------------
    // The code below this line ONLY runs when the Left Branch 
    // has completely finished and we have climbed back up to this node.
    // ---------------------------------------------------------

    // 3. PREPARING TO GO RIGHT
    // Now we want to try the "Take" branch. So we put the current number into our array.
    currSubset.push_back(nums[i]);
    
    // 4. GOING RIGHT (The "Take" Branch)
    // We move to the next index (i + 1), but this time, the number is in our array.
    solve(i + 1, nums, currSubset, result);
    
    // 5. CLIMBING UP / CLEANUP (The Backtrack)
    // The Right Branch just finished. We are about to climb up to the PREVIOUS level.
    // We MUST remove the number we just added so we don't accidentally carry it 
    // up the tree into other branches.
    currSubset.pop_back(); 
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currSubset;
        solve(0, nums, currSubset, result);
        return result;
    }
};
int main(){
    Solution s;
    vector<int> arr = {1,2,3};
    vector<vector<int>> v;
    v = s.subsets(arr);

    for (const auto& subset : v) {
        cout << "{";
        for (int num : subset) {
            cout << num;
            if (num != subset.back()) {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }
}