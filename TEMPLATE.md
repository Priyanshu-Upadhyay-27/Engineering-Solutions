# Problem Solution Template

Use this template when adding new problem solutions to the repository.

## File Name Format
`(problem number on leetcode/platform name)-(problem name).ext` (lowercase with hyphens)

Examples: 
- `two-sum.py`
- `binary-search.cpp`
- `merge-sort.java`

---

## C++ Template

```cpp
/*
# XXX. Problem Name

**Link:** [LeetCode](URL)  
**Difficulty:** Easy/Medium/Hard

## Approach
Brief one-line approach description.

![Solution](./XXX-notes.jpg)

---

**Time Complexity:** O(?)  
**Space Complexity:** O(?)

## Key Learning
Main takeaway or important concept from this problem.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Your solution function
    vector<int> solutionFunction(vector<int>& nums, int target) {
        // Your implementation here
    }
};

// Test cases
int main() {
    Solution sol;
    
    // Test 1
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> result1 = sol.solutionFunction(nums1, 9);
    // Expected: [0, 1]
    
    cout << "All test cases passed!" << endl;
    return 0;
}
```

---

## Additional Notes

### For Multiple Solutions
If you have multiple approaches, create separate files:
- `problem-name-bruteforce.py` - O(n²) or naive approach
- `problem-name-optimal.py` - Best time/space complexity
- `problem-name-approach2.py` - Alternative solution

### For Different Languages
Same problem in different languages:
- `problem-name.py`
- `problem-name.cpp`
- `problem-name.java`
- `problem-name.js`

### README in Each Folder
Consider adding a `README.md` in each topic folder with:
- List of all problems solved
- Common patterns used
- Difficulty distribution
- Progress tracker

### Complexity Analysis Guide
- **O(1)** - Constant time (hash map lookup, array access)
- **O(log n)** - Logarithmic (binary search, balanced tree)
- **O(n)** - Linear (single pass through array)
- **O(n log n)** - Linearithmic (merge sort, heap sort)
- **O(n²)** - Quadratic (nested loops)
- **O(2ⁿ)** - Exponential (recursive fibonacci without memoization)

---

**Happy Coding! ⚙️**
