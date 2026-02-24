#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1, m = 0;
        while(m <= r){
            if(nums[m] == 0){
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if(nums[m] == 1){
                m++;
            }
            else{
                swap(nums[m], nums[r]);
                r--;
            }
        }
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2,0,2,1,1,0};

    cout<<"Objects before sorting : "<<endl;
    for(auto i: nums) cout<<i<<" ";
    cout<<endl;
    sol.sortColors(nums);
    cout<<"Objects after sorting : "<<endl;
    for(auto i: nums) cout<<i<<" ";
    cout<<endl;
}