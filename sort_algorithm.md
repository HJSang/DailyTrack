# Sort Algorithms 
This doc is used to review and summarize sorting related algorithms.

## Selection Sort 
The selection sort algorithm sorts an array by repeatly finding the minimum elements from unsorted part and putting it at the beginning.

The algorithm maintains two subarrays in a given array.
* The subarray is already sorted.
* Remaining subarray which is unsorted

## Bubble Sort
 Bubble sort is the simplest sorting algorithm: Repeatly swap the adjacent elements if they are in wrong order.

## Recursibe Buuble Sort
```
// Iterative Bubble Sort
bubbleSort(arr[], n)
{
  for (i = 0; i < n-1; i++)      

     // Last i elements are already in place   
     for (j = 0; j  arr[j+1])
         swap(arr[j], arr[j+1]);
} 
```

## Insertion Sort
*Algorithm*:
// Sort an arr[] of size n
insertionSort(arr, n)
Loop from i = 1 to n-1.
* a) Pick element arr[i] and insert it into sorted sequence arr[0,i-1]

## Merge Sort
MergeSort(arr[], l,  r)
If r > l
     * 1. Find the middle point to divide the array into two halves:  
             middle m = (l+r)/2
     * 2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     * 3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     * 4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)



