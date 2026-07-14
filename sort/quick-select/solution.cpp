#include <bits/stdc++.h>
using namespace std;

int partitionIndex(vector<int>& nums, int left, int right){
    int i = left + 1;
    int j = right;
    int pivot = nums[left];
    while(i <= j){
        while (i <= j && nums[i] <= pivot) {
                i++;
            }
            while (i <= j && nums[j] > pivot) {
                j--;
            }
            if (i < j) {
                swap(nums[i], nums[j]);
            }
    }
    swap(nums[left], nums[j]);
    return j;
}

void quickSort(vector<int>& nums, int left, int right) {
    if (left < right) {
        int partition_index = partitionIndex(nums, left, right);
        quickSort(nums, left, partition_index - 1);
        quickSort(nums, partition_index + 1, right);
    }
}

int main(){
    vector<int> arr1 = {49,5,67,100,3, 9,0,34,22,23,1};
    int left = 0;
    int right = arr1.size();
    cout<<"Initial Array : ";
    for(auto i: arr1) cout<<i<<" ";
    cout<<endl;
    quickSort(arr1, left, right);
    cout<<"Sorted Array : ";
    for(auto i: arr1) cout<<i<<" ";
    cout<<endl;
}


