/* CPP Program to implement selection sort algorithms*/
#include<iostream>
using namespace std;

// swap two elements 
template <class T>
void swap(T *a, T *b)
{
	T temp = *b;
	*b = *a;
	*a = temp;
}

// select the minimum index
template <class T>
int minimum_index(T arr[], int start, int n)
{
	int i, min_index = start;
	for(i=start; i<n; i++)
	{
		if(arr[i] < arr[min_index])
		{
			min_index = i;
		}
	}
	return min_index;
}

// selection sort 
template <class T>
void selection_sort(T arr[], int n)
{
	int i, min_index;
	for(int i=0; i <n; i ++)
	{
		// select the min_index
		min_index = minimum_index(arr,i,n);
		swap(&arr[i], &arr[min_index]);
	}
}

// print array 
template <class T>
void print_array(T arr[], int n)
{
	for(int i=0; i<n; i++){
		cout<<arr[i]<< '\n';
	}
}

int main()
{
	float arr[] = {64.0, 25, 12.0, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	print_array(arr,n);
	cout<<"After sorting:\n";
	selection_sort(arr,n);
	print_array(arr,n);
	return 0;
}




