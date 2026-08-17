# 121 Best time to buy a stock

**Link:** [LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)  
**Difficulty:** Easy

## Approach
We need to find the minimum number so far iterated thorugh the first pointer, and minus the number we are iterating with the first pointer. A window is maintained i.e. the minimum number so far and the the first number iterating one by one.

![Solution](./121-notes.jpeg)

---

**Time Complexity:** O(N)  
**Space Complexity:** O(N)

## Key Learning
Sliding Window is the technique in which window is maintained from both ends, and is reduced or increased according to the conditions were met or not.

## Mistakes
Solving it suing two pointers.
Tried to solve it using finding the array minima and maxima at once using the functions max and min, and substracting the min from the max which is wrong, as the condition is you cannot sell a stock before buying it. 