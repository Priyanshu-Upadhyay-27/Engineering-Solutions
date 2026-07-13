#include <vector>
#include <unordered_map>
#include <queue>
#include<iostream>
using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> countMap;
        for (int num : nums) {
            countMap[num]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for (auto& p : countMap) {
            int number = p.first;
            int frequency = p.second;
    
            minHeap.push({frequency, number});

            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop(); 
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