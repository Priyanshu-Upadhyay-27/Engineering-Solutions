# Sort Array using pure recursion

**Difficulty:** Medium

## Approach
It includes using recursion at two parts, One divides the array into smaller subarray, and to add the new element, we will divide the rest subarray till length is zero or till the left out element is greater than the last element. 


---

**Time Complexity:** O(N)  
**Space Complexity:** O(N)

## Key Learning
The biggest takeaway here is realizing that recursive in-place modification is a myth when it comes to Space Complexity.If an interviewer hands you an array problem and says, "Solve this in O(1) auxiliary space," you cannot use recursion. Even if you don't create new variables, the call stack itself is considered auxiliary space. You would be forced to use an iterative while loop with two pointers to achieve true O(1) space.Recursion is beautiful for logic, but it always charges a memory tax!