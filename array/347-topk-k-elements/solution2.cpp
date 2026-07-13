#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> countMap;
        int n = nums.size();
        for (int num : nums) {
            countMap[num]++;
        }
        vector<vector<int>> buckets(n + 1);
        for (auto& p : countMap) {
            int number = p.first;
            int frequency = p.second;
            buckets[frequency].push_back(number);
        }
        vector<int> result;
        for (int i = n; i >= 0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};

int main(){
    Solution sol;
    vector<int>arr1 = {1,1,1,2,4,4,4,4,2,3,3,3};
    int k = 3;
    vector<int>result1 = sol.topKFrequent(arr1, k);
    for(auto & r: result1){
        cout<<r<<" ";
    } 
}