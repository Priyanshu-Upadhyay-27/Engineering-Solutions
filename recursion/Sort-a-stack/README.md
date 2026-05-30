# Sort a stack using Recurison
  

## Approach
It was similar to what we have done in arrays, First we have to recursively divide the stack into smaller and smaller stack, store the top element at each call, then we take the top element and pass it to insert function with the stack left, then that insert function recursively, put the right element at the correct position.

---

**Time Complexity:** O(N^2)  
**Space Complexity:** O(N)

## Key Learning
Recursion can completely remove loops and other things but requires extra memory for call stack and we should follow IBM method(from Aditya Verma) or the take - not take method which help significantly.