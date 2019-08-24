/* Cpp to implement Insertion Sort*/
#include<iostream>
using namespace std;

template <class T>
void print_array(T arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
}

template <class T>
void insertion_sort(T arr[], int n) 
{ 
    // Base case 
    if (n <= 1) 
        return; 
  
    // Sort first n-1 elements 
    insertion_sort( arr, n-1 ); 
  
    // Insert last element at its correct position 
    // in sorted array. 
    T last = arr[n-1]; 
    int j = n-2; 
  
    /* Move elements of arr[0..i-1], that are 
      greater than key, to one position ahead 
      of their current position */
    while (j >= 0 && arr[j] > last) 
    { 
        arr[j+1] = arr[j]; 
        j--; 
    } 
    arr[j+1] = last; 
} 

int main()
{
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Sorting:"<<endl;
	print_array(arr,n);
	cout<<"After Sorting:"<<endl;
	insertion_sort(arr,n);
	print_array(arr,n);
	return 0;
}