# Search Algorithm Summary & Review
## Linear Search 
*Linear Search*: Time Complexity is O(n).
* Start from the most left element and match one by one.
* If macthed, return the index.
* If not matched, return -1.

## Binary Search 
*Problem*: Given a sorted array, to search  a given element x.
* Match x with the middle element.
* If x matches with the middle element, return the middle index.
* Else if x is greater than the middle element, recur for the right half.
* Else recur for the left half.

The time complexity is O(log n).

## Jump Search 
The basic idea is to check fewer elements by jumping ahead by fixed steps or skipping some elements in place of searching all elements.

For example, assume we have a sorted array *arr[]* of size n. Suppose that the step size is m. Then, we can search at the index *arr[0]*, *arr[m]*, *arr[2m]*, ..., *arr[km]* and so on. If we find the interval *arr[dm]< x < arr[(d+1)m]*, we can perform the linear serch from the index *dm* to *(d+1)m*.

To understand the time complexity and the optimal step size, we can consider the worst case. Assume we first seach *m-1* elements to identify the interval and them apply *m/n* to get the matched element. Hence, the total time complexity is *O{m-1 + m/n}*. The optimal step size is *\sqrt{m}*.


