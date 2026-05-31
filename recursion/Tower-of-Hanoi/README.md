# Tower Of hanoi


## Approach
We will first understand the conditions and how the problem solves, then using the IBH method, we first define base condition, then write hypothesis for n-1 plates which will transfer n-1 plates form source to helper function and then in induction we write transferring the last plate from the source to the destination, and then calling the function again to trnasfer all the plates from helper to destination.

---

**Time Complexity:** O(2^n)  
**Space Complexity:** O(n)

## Key Learning
Understand the flow of problem to derive and apply our own custom methods like IBH. 