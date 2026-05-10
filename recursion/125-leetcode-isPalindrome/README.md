# 125 Valid Palindrome

**Link:** [LeetCode](https://leetcode.com/problems/valid-palindrome/)  
**Difficulty:** Easy

## Approach
Used Induction-Base-Hypothesis method.

![Solution]()

---

**Time Complexity:** O(N)  
**Space Complexity:** O(N)

## Key Learning
1. Translating "State" into Parameters
In an iterative while loop, your "state" is tracked by variables updated inside the loop (e.g., left++, right--). In recursion, you don't use loops. Instead, your state becomes your function parameters. Every time you make a recursive call, you are literally passing the updated state forward (left + 1, right - 1) to the next instance of the function.

2. The Recursion Tax (Iterative vs. Recursive Trade-offs)
While the recursive IBH method is elegant and proves you understand function calls, the classic iterative two-pointer while loop solves this problem in O(1) space. By forcing recursion, we paid a "tax" of O(N) extra memory just to maintain the call stack. Knowing when to avoid recursion is just as important as knowing how to write it!.