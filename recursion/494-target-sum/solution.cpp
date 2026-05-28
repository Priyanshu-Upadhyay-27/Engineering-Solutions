#include<bits/stdc++.h>
using namespace std;

class Solution {
    int ways = 0;
public:
    void recurse_tree(vector<int>& nums, int target, int sum, int i){
        if(i == nums.size()){
            if(sum == target) ways++;
            return;
        }
        recurse_tree(nums, target, sum + nums[i], i + 1);
        recurse_tree(nums, target, sum - nums[i], i + 1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        ways = 0;
        int sum = 0;
        int i = 0;
        recurse_tree(nums, target, sum, i);
        return ways;
    }
};

int main(){
    Solution s;
    vector<int> arr1 = {1,1,1,1,1};
    int target = 3;
    int ways = 0;
    ways = s.findTargetSumWays(arr1, target);
    cout<<"There are "<<ways<<" ways to arrange the + and - symbol in this array to achieve the target sum"<<endl;
}