# 435 Non Overlapping Intervals

**Link:** [LeetCode](https://leetcode.com/problems/non-overlapping-intervals/description/)  
**Difficulty:** Medium

## Approach
In this, greedy is implemented. First we sort on the basis of second number of the interval. Then we count when a overlap condition is hit. If a overlap condition is not hit, meaning the consecutive overlapping ends and fresh interval is started. there we put our last_end the comparing variable.


---

**Time Complexity:** O(nlogn)  
**Space Complexity:** O(n)

## Key Learning
Greedy can be applied in any way, here it's applied in a shrinkable manner, in it's vice-versa question(45) we were trying to find the expanded version i.e. we were trying to include intervals which end and starts at same value and also, we were taking the max value there. then pushing it to the new vector and returning that at last and also thats's why we were waiting . But in this, we just need to remove the interval which causes overlapping, so 