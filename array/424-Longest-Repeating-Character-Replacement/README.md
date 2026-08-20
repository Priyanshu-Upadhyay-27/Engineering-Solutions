# 424. Longest Repeating Character Replacement

**Link:** [LeetCode](https://leetcode.com/problems/longest-repeating-character-replacement/description/)  
**Difficulty:** Medium

## Approach
In this, we need to think of maintaining a window, where left will move forward when window condition voilates. Also, first we need to understand calculate the most frequent character in the window, which can be counted using the right pointer. Then use that character max Frequency with the window size to iterate. Condition: Window size - max frequency will give you the left out characters which are not most frequent characters, Now we have k replacements, therefore we can allow atmost k characters other than most frequent one. Therefore window size will be changed according to this, we will decerease the window size by increasing the left variable when we get more then k characters other then the most frequent one. and move the right pointer every iteration. This way, we will get the overall window which is the most largest and contians single distinct character. 

![Solution](./XXX-notes.jpg)

---

**Time Complexity:** O(N)  
**Space Complexity:** O(N)

## Key Learning
Very different approach, extreme logic for me
I was thinking directly for the conditions but first we need to understand the conditions were derived from the thing, that we need to recognise the most freuent character. 


## Problems
