#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftmax = height[0];
        int rightmax = height[n - 1];
        int i = 0;
        int j = n - 1;
        int area = 0;
        while(i <= j){
            if(height[i] > leftmax) leftmax = height[i];
            if(height[j] > rightmax) rightmax = height[j];

            if(leftmax < rightmax){
            area += min(leftmax, rightmax) - height[i];
            i++;
            }
            else if(leftmax >= rightmax){
                area += min(leftmax, rightmax) - height[j];
                j--;
            }
        }
        return area;
    }
};

int main(){
    Solution sol;
    vector<int> test1 = {0,2,0,3,1,0,1,3,2,1}; // output: 9
    vector<int>test2 = {4,2,0,3,2,5}; // output: 9
    int k = sol.trap(test1);
    cout<<"Amount of water trapped in the blocks :"<<k<<endl;
}
