# Merge Sort


## Approach
We made 2 functions:
In this we first divide the initial array using recursive calls(left and right). It is done till base case reaches i.e. only one element left which is already sorted.
Then we take that divided arrays which are just single elements and zip them using function called merge. it uses two pointer one for each array at a time, as we work with two arrays at a time. Now the smaller value will be pushed first in a temp array which will make the new array sorted. 

---

**Time Complexity:** O(NlogN)  
**Space Complexity:** O(N)

## Key Learning
Merge Sort guarantees this O(N \log N) time even in the absolute worst-case scenario.