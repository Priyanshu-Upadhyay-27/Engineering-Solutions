/*
# 80 Remove Duplicates in a Sorted Array - II

**Link:** [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)  
**Difficulty:** Medium

## Approach
We have to use slow fast two pointer approach, where a variable i(writer) sits at the first position to check wehter valid or invalid, and a variable j(explorer), which iterates the array linearly, and find new elements, then we compare the elements at i and j to decide wether condition is true or not.

![Solution](./XXX-notes.jpg)

---

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

## Key Learning
To solve an inplace two pointer problem, design a condition which can look back or forth to compare with the other elements.