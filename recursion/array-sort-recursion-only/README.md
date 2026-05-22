# Sort Array using pure recursion

**Difficulty:** Medium

## Approach


---

**Time Complexity:** O(N)  
**Space Complexity:** O(N)

## Key Learning
In earlier problems, if you needed to search an array, you physically built the array in memory and looped through it. This problem teaches you that if the data follows strict mathematical rules, you don't need to build it to search it.You effectively performed a Binary Search on a massive tree that didn't actually exist anywhere except in your algorithm's logic. By using math (K and mid) to act as a GPS, you navigated a "virtual" search space. This is a master-level optimization technique. Whenever an interviewer gives you a problem where the data grows exponentially (like 2^N), your first thought should now be: "Can I find the answer mathematically without actually generating the data?"