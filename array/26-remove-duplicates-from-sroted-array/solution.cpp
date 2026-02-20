#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 0;
        int n = nums.size();
        for(int j = 1; j < n; j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i + 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    
    int k = sol.removeDuplicates(nums);


    cout << "Number of unique elements: " << k << endl;
    
    cout << "The unique elements are: ";
    for (int idx = 0; idx < k; idx++) {
        cout << nums[idx] << " ";
    }
    cout << endl;

    return 0;
}