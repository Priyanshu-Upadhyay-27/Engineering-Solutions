# 3 Longest Substring Without Repeating Characters

**Link:** [LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)  
**Difficulty:** Medium

## Approach
Used the sliding window, first stored the elements which are new in the hashmap with there last closest index. And if an element is repeated then the index is updated in the map and is updated to the current index + 1.

![Solution](./XXX-notes.jpg)

---

**Time Complexity:** O(N)  
**Space Complexity:** O(N)

## Key Learning
hashing

## Mistakes
