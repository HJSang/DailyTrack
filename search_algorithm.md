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

## Interpolation Search 
Interpolation Search is a generalization of Binary Search.  Suppose that the arrays in a sorted array are uniformly distributed. Instead of middle index, we use the interpolation index to indicate the uniform distribution. That is the distance of indices are proportional to the distance of values in expectation. 

* pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]
* arr[] ==> Array where elements need to be searched
* x     ==> Element to be searched
* lo    ==> Starting index in arr[]
* hi    ==> Ending index in arr[]

*Algorithm*: 
Rest of the Interpolation algorithm is the same except the above partition logic.

*Step1*: In a loop, calculate the value of “pos” using the probe position formula.
*Step2*: If it is a match, return the index of the item, and exit.
*Step3*: If the item is less than arr[pos], calculate the probe position of the left sub-array. Otherwise calculate the same in the right sub-array.
*Step4*: Repeat until a match is found or the sub-array reduces to zero.

## Exponential Search
Exponential search involves two steps:
* Find range where element is present
* Do Binary Search in above found range.

How to find the range where element may be present?

The idea is to start with subarray size 1, compare its last element with x, then try size 2, then 4 and so on until last element of a subarray is not greater.
Once we find an index i (after repeated doubling of i), we know that the element must be present between i/2 and i (Why i/2? because we could not find a greater value in previous iteration)

## Sublist Search 
Search a linked list in another list:  Given two linked lists, to check if the first linked list is in the second linked list. 

*Algorithm* :
* Take the first node of the second linked list.
* Start to macth the first node.
* If the whole list is macthed return true.
* Else if break and take first list to the first node again.
* And Take second list to its second node.
* Repeat these steps until any of the linked lists becomes empty.
* If the first list becomes empty then list found else not.

## Fibonacci Search


