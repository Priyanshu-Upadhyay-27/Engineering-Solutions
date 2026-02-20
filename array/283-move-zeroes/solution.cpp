#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        while(j < n){
            if(nums[i] == 0 && nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else if(nums[i] == 0 && nums[j] == 0){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
    }
};

int main(){
    Solution sol;
    vector<int> arr = {0,1,0,3,12};
    int n = arr.size();
    cout<<"Array before moving zeroes at end :"<<endl;
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    sol.moveZeroes(arr);
    cout<<"Array after moving zeroes at end :"<<endl;
    for(int i = 0; i < n; i++) cout<< arr[i]<<" ";
}