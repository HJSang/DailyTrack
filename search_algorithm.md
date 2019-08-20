# Search Algorithm Summary & Review
## Linear Search 
*Linear Search*: Time Complexity is O(n).
* Item Start from the most left element and match one by one.
* Item If macthed, return the index.
* Item If not matched, return -1.

## Binary Search 
*Problem*: Given a sorted array, to search  a given element x.
* Item Match x with the middle element.
* Item If x matches with the middle element, return the middle index.
* Item Else if x is greater than the middle element, recur for the right half.
* Item Else recur for the left half.

The time complexity is O(log n).
