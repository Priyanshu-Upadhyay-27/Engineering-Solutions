#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int running_sum = 0;
        int shadow = 0;
        
        unordered_map<int, int> map;
        
        map[0] = 1; 

        for(int i = 0; i < n; i++){
            running_sum += nums[i];
            
            shadow = running_sum - k;

            if(map.find(shadow) != map.end()){
                count += map[shadow];
            }

            map[running_sum]++;
        }

        return count; 
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 1, 1};
    int k1 = 2;
    cout << "Test Case 1: {1, 1, 1}, k = 2" << endl;
    cout << "Expected: 2, Result: " << sol.subarraySum(nums1, k1) << endl;


    return 0;
}