#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0, r = n - 1;
        vector<int>idx;
        while(l < r){
            if(numbers[l] + numbers[r] < target) l++;
            else if(numbers[l] + numbers[r] > target) r--;
            else{
                idx.push_back(l + 1);
                idx.push_back(r + 1);
                break;
            }
        }
    return idx;
    }
};
int main(){
    Solution sol;
    vector<int> ex1 = {2,7,11,15};
    int tar1 = 9;
    vector<int> ex2 = {-10, -8, -5, -2, 0, 3, 6, 12};
    int tar2 = 1;
    vector<int> idx1 = sol.twoSum(ex1, tar1);
    cout<<"Element positions, which can add upto target :"<<endl;
    for(auto i: idx1) cout<<i<<", ";
}