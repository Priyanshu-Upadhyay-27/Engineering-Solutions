#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[5] = {1,2,2,3,1};
    unordered_map<string, int> mp;
         for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = nums[i];
         }
      cout<<mp[0];
}
