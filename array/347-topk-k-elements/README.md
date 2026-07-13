# 347 Top K elements

**Link:** [LeetCode](https://leetcode.com/problems/top-k-frequent-elements/description/)  
**Difficulty:** Medium

## Approach
Brute force: You just have to count each repetition of unique elements and then choose the top k ones. The optimisation is, if do it using hash map and priority queue with pair as there elements, then we can save time and make it bit more optimised


**Time Complexity:** O(Nlogk)  
**Space Complexity:** O(N)

## Key Learning
Priority Queue is useful in making heap. Syntax etc.