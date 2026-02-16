#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size(), i = 0, left, right, sum = 0;
        sort(nums.begin(), nums.end());
        vector<vector<int>> trip;
        for(i; i < n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            left = i+1, right = n - 1;
            while(left < right){
                sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    trip.push_back({nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[left+1]) left++;
                    while(left < right && nums[right] == nums[right-1]) right--;
                    left++;
                    right--;
                }
                else if(sum > 0) right--;
                else left++;
            }
        }
        return trip;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> triplets;
    triplets = sol.threeSum(nums);
    cout<<"The unique triplets having sum 0 :"<<endl;
    for(auto i: triplets){
        for(auto j: i) cout<<" "<<j;
        cout<< endl;
    }
    return 0;
}