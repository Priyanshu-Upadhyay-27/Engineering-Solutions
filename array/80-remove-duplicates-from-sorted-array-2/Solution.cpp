#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return n;

        int i = 2; // The "write" pointer
        for (int j = 2; j < n; j++) {
            if (nums[j] != nums[i - 2]) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i; //new length
    }
};

int main() {
    Solution sol;

    // Test Case: [1, 1, 1, 2, 2, 3]
    // Expected Output: New length = 5, Array = [1, 1, 2, 2, 3]
    vector<int> testArray = {1, 1, 1, 2, 2, 3};

    cout << "Original array: ";
    for (int x : testArray) cout << x << " ";
    cout << endl;

    int newLength = sol.removeDuplicates(testArray);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int k = 0; k < newLength; k++) {
        cout << testArray[k] << " ";
    }
    cout << endl;

    return 0;
}