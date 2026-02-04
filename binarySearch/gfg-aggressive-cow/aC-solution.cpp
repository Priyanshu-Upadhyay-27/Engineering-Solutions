#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPlace(vector<int> &stalls, int mid, int k){
        int cow_count = 1, n = stalls.size(), lastPosition = stalls[0];;
        for(int i = 1; i < n; i++){
            if((stalls[i] - lastPosition) >= mid){
                cow_count++;
                lastPosition = stalls[i];
            if(cow_count == k) return true;
            }
    }
    return false;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int low = 1, ans = 0;
        int high = *max_element(stalls.begin(), stalls.end()) - *min_element(stalls.begin(), stalls.end());
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(canPlace(stalls, mid, k)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
    
};




int main() {
    Solution sol;
    
    // Test 1
    vector<int> nums1 = {1,2,4,8,9};
    int k = 3;
    int result1 = sol.aggressiveCows(nums1, k);
    
     cout << "Test 1: " << result1 << " (Expected: 3)" << endl;
    return 0;
}