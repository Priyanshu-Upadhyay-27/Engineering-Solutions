#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums, int left, int mid, int right) {
    vector<int> temp;
    int i = left;
    int j = mid + 1;

    while(i <= mid && j <= right){
        if(nums[i] < nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            i++;
        }
    }
    while(i <= mid){
        temp.push_back(nums[i]);
        i++;
    }

    while(j <= right){
        temp.push_back(nums[j]);
        j++;
    }
    for (int k = left; k <= right; k++) {
        nums[k] = temp[k - left];
    }
}
