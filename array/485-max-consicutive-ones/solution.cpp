#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max_count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                count++;
                max_count = max(max_count,count);
            }
            else count = 0;
        }
        return max_count;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,1,0,1,1,1,0,1,1,1,1,2};
    int maxConsecutiveOnes = sol.findMaxConsecutiveOnes(nums);
    cout<<"Maximum number of consecutive ones : "<<maxConsecutiveOnes;
}