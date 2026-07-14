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
            j++;
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

void mergeSort(vector<int>& nums, int left, int right) {
    if (left >= right) {
        return;
    }
    int mid = left + (right - left)/2;
    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);
    merge(nums, left, mid, right);
}

int main(){
    vector<int>arr1 = {7,30,7,0,55,2,9,34,6};
    int left = 0;
    int right = arr1.size() - 1;
    mergeSort(arr1, left, right);
    for(auto i: arr1) cout<<i<<" ";
}
