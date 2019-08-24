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


## QuickSort
```
/* low  --> Starting index,  high  --> Ending index */
quickSort(arr[], low, high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}
```
Partition Algorithm:
```
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
partition (arr[], low, high)
{
    // pivot (Element to be placed at right position)
    pivot = arr[high];  
 
    i = (low - 1)  // Index of smaller element

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
}
```

