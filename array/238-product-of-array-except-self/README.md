# 238 Product of Array Except Self

**Link:** [LeetCode](https://leetcode.com/problems/product-of-array-except-self/description/)  
**Difficulty:** Medium

## Approach
Used Prefix Sum approach in the product form, and first calculated the total product which is on the left side of element i in the loop moving forward, then created a variable called right_product, which was used to multiply the right side product with the lleft side product.

![Solution](./XXX-notes.jpg)

---

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

## Key Learning
Space can be saved, if logic built can overlapp the given array, just like here, where inital and some variable helped to save the space complexity.