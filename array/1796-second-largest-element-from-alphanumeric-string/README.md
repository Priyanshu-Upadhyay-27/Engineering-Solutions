# 1796 Second Largest Digit in a String

**Link:** [LeetCode](https://leetcode.com/problems/second-largest-digit-in-a-string/description/)  
**Difficulty:** Easy

## Approach
Here just you need to check which element is a number or a digit and need to apply that second number finding logic. So we will first defined first and second with a smaller value, then parse number one by one and check if its the largest then put it in the first and put the first in the second, if its less then first and greater then second then update the second.


---

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

## Key Learning
Stoi is used to convert string to integer.
