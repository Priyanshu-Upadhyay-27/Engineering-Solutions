#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int n = nums.size();
        for(int j = 0; j < n; j++){
            if(nums[j] != val){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main(){
    Solution sol;
    vector<int> test1 = {0,1,2,2,3,0,4,2};
    int element = 2;
    
    int k = sol.removeElement(test1, element);
    cout<<"Number of Unique Elements in the array after removing the element :"<<k;
    for(auto i: test1) cout<<i<<" ";
}