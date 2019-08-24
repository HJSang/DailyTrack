/* Quick Sort Algorithm */
#include<iostream>
using namespace std;

// swap function
template <class T>
void swap(T *x, T *y)
{
	T temp = *y;
	*y = *x;
	*x = temp;
}

//partition function
/* This function takes last element as pivot, 
   places the pivot element at its correct 
   position in sorted  array, and places 
   all smaller (smaller than pivot) to left 
   of pivot and all greater elements to  
   right of pivot */
template <class T>
int partition(T arr[], int l, int h)
{
	T x = arr[h];
	int i = l-1;
	for(int j = l; j<h; j++)
	{
		if(arr[j]<=x)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[h]);
	return i+1;
}


//quicksort
template <class T>
void quicksort(T arr[], int l, int h)
{
	if(l<h)
	{
		int p = partition(arr,l,h);
		quicksort(arr,l,p-1);
		quicksort(arr,p+1,h);
	}
}


// Driver code 
int main() 
{ 
	int n=5;
    int arr[] = { 4, 2, 6, 9, 2 }; 
  
    quicksort(arr, 0, n - 1); 
  
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
  
    return 0; 
} 