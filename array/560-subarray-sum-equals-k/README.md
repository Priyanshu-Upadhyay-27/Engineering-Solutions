# 560 Subarray sum equals K

**Link:** [LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/description/)  
**Difficulty:** Medium

## Approach
Used prefix sum, calculated the cumulative sum upto the index i, on which currently i am there in the array and substracted the target, and then find the result in the hashmap.

![Solution](./XXX-notes.jpg)

---

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

## Key Learning
Cumulative Sum can help to find subarrays.