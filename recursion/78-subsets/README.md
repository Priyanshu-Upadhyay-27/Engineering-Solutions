# 78 Subsets

**Link:** [LeetCode](https://leetcode.com/problems/subsets/)  
**Difficulty:** Medium

## Approach
This problem can be solved using recursion and backtracking.

At each index, we make two choices:
1. Do not include the current element.
2. Include the current element.

This creates a decision tree where every leaf node represents one subset. When we reach the end of the array, we store or print the current path as a valid subset.

The same idea can also be written using string manipulation for learning recursion, where one string keeps the current input and another string keeps the current output.

![Subset recursion tree placeholder](./subset-notes-1.jpeg)
![Subset recursion tree placeholder](./subset-notes-2.jpeg)

---

**Time Complexity:** O(2^n * n)  
**Space Complexity:** O(n)

## Key Learning
The recursion tree is the most important part of this problem. Once the tree is clear, the code becomes straightforward. Drawing the tree first solves most of the problem.