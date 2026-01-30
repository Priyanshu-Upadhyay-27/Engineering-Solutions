# Problem Solution Template

Use this template when adding new problem solutions to the repository.

## File Name Format
`problem-name.ext` (lowercase with hyphens)

Examples: 
- `two-sum.py`
- `binary-search.cpp`
- `merge-sort.java`

---

## Python Template

```python
"""
Problem: [Problem Name]
Platform: [LeetCode/Codeforces/CodeChef/HackerRank/etc]
Difficulty: [Easy/Medium/Hard]
Link: [Problem URL]

Problem Statement:
[Write a brief description of the problem. Include:
 - What is given as input
 - What needs to be returned
 - Any constraints (e.g., 1 <= n <= 10^5)
 - Example test case with explanation]

Example:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: nums[0] + nums[1] == 9, so return [0, 1]

Approach:
[Explain your solution strategy:
 - High-level approach
 - Why this approach works
 - Key insights or observations
 - Any special cases to handle
 - Step-by-step breakdown if complex]

Intuition:
[What made you think of this approach? What pattern does it follow?]

Time Complexity: O(?)
Space Complexity: O(?)

Edge Cases Handled:
- [List any edge cases]

Key Learning:
[What pattern or technique does this problem teach?
 What similar problems can be solved with this approach?
 What data structure or algorithm concept is demonstrated?]
"""

def solution_function(param1, param2):
    """
    Brief description of what the function does.
    
    Args:
        param1: Description
        param2: Description
    
    Returns:
        Description of return value
    """
    # Your implementation here
    pass

# Test cases
if __name__ == "__main__":
    # Test 1: Normal case
    assert solution_function([2, 7, 11, 15], 9) == [0, 1]
    
    # Test 2: Edge case
    assert solution_function([3, 3], 6) == [0, 1]
    
    # Test 3: Another test
    # assert solution_function(...) == ...
    
    print("✅ All test cases passed!")
```

---

## C++ Template

```cpp
/*
Problem: [Problem Name]
Platform: [LeetCode/Codeforces/CodeChef/etc]
Difficulty: [Easy/Medium/Hard]
Link: [Problem URL]

Problem Statement:
[Brief description]

Approach:
[Explanation of solution strategy]

Time Complexity: O(?)
Space Complexity: O(?)

Key Learning:
[Important takeaways]
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

## Java Template

```java
/*
Problem: [Problem Name]
Platform: [LeetCode/Codeforces/CodeChef/etc]
Difficulty: [Easy/Medium/Hard]
Link: [Problem URL]

Problem Statement:
[Brief description]

Approach:
[Explanation of solution strategy]

Time Complexity: O(?)
Space Complexity: O(?)

Key Learning:
[Important takeaways]
*/

class Solution {
    public int[] solutionFunction(int[] nums, int target) {
        // Your implementation here
    }
    
    // Test cases
    public static void main(String[] args) {
        Solution sol = new Solution();
        
        // Test 1
        int[] nums1 = {2, 7, 11, 15};
        int[] result1 = sol.solutionFunction(nums1, 9);
        // Expected: [0, 1]
        
        System.out.println("All test cases passed!");
    }
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
