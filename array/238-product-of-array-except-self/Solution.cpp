#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> answer(n, 1);
        
        for(int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }
       
        int right_product = 1;
        for(int j = n - 1; j >= 0; j--) {
            answer[j] = answer[j] * right_product;
            right_product = right_product * nums[j];
        }
        
        return answer;
    }
};


int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(nums);
    
    cout << "Input: [1, 2, 3, 4]" << endl;
    cout << "Output: [";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << (i == result.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    return 0;
}