# 26 Remove Duplicates from Sorted Array

**Link:** [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)  
**Difficulty:** Easy

## Approach
Used one slow pointer as the first occurence of the unique element and other pointer as the the scouting agent of the whole array, updating the i and returning returining i + 1 as the unique elements.

---

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

## Key Learning
More understanding of Slow Fast Two Pointer.