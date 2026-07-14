# Quick Sort

## Approach
It also divides array in two parts but after the processing:
It first choose a random number which can be termed as pivot, Now we put the pivot in the right position by putting a pointer at first and last position in the array ignoring the pivot. Now we move i and jtowards center and the condition is till i < j. Now when i is greater then the pivot since its at left side, we stop there and if j is smaller then pivot since its at right we stop there. We swap i and j and move further, else we move normally, i++, j--. when i > j, then we swap j and the pivot. We return the index of the partition element or pivot or j.
Now the quick sort is simple, we take that partition element index and since it is present in the right position, then we apply the quick sort again at the left and right unsorted arrays around the pivot element. Which is done using recursive calls.

**Time Complexity:** O(NlogN) , worst case will be N^2
**Space Complexity:** O(logN), worst case will be N

## Key Learning
quick Sort is an algorithm which doesnt make a temp array and solve the problem inplace. Also, standard cpp sort function doesnt use quick sort, it uses it only at start, but to avoid deep recursive calls, it switch to heap sort, and this hybrid algo is known as introsort algorithm.