# 42 Trapping Rainwater

**Link:** [LeetCode](https://leetcode.com/problems/trapping-rain-water/description/)  
**Difficulty:** Hard

## Approach
We need to look at it from different pov. I was last time commign solving the maximum water problem. Here we need to think, per block, not as a whole. We cannot just run two opposite pointers towards each other and calculate the area, as some hard blocks will need to be substracted from the total area. So we first take two vars, left max and right max which are maximum height blocks on there respective sides. And intiialise two opposite pointers. Now these pointers will move inward and update the leftmax and rightmax and area per block will be equal to min(leftmax, rightmax) * height[i or j], i or j will be selected per iteration for the area calculation as the smaller one between leftmax or rightmax will choose. Accoridngly only i or only j will be updated.

![Solution](./42-notes-a.jpeg)
![Solution](./42-notes-b.jpeg)

---

