#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSum(vector<int>&nums, int k, int mid){
        int count = 1;
        int min_sum = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            if(count > k) return false;
            else if (nums[i] > mid) return false; // important time complexity reducing line
            else if(mid >= min_sum + nums[i]){
                min_sum += nums[i];
            }
            else{
                count++;
                min_sum = nums[i];
            }
        }
        return count <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end()), mid, ans = 0;
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low <= high){
            mid = low + (high - low)/2;
            if(checkSum(nums,k,mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    // Test 1
    vector<int> nums1 = {7, 2, 5, 10, 8};
    int k1 = 2;
    int result1 = sol.splitArray(nums1, k1);

    //Test 2
    vector<int> nums2 = {1,4,4};
    int k2 = 3;
    int result2 = sol.splitArray(nums2, k2);
    cout<<"output2 : "<< result2<<endl;
    
    cout << "All test cases passed!" <<endl;
    return 0;
}