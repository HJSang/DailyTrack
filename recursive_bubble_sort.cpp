/* CPP Program to implement Recursive Bublle Sorting Algorithm*/
#include<iostream>
using namespace std;

// swap 
template <class T>
void swap(T *x, T *y)
{
	T temp = *y;
	*y = *x;
	*x = temp;
}

// bubble sorting
template <class T>
void bubble_sorting(T arr[], int n)
{
	if(n==1) return;
	for(int i=0; i<n-1; i++){
		if(arr[i]>arr[i+1])
		{
			swap(&arr[i], &arr[i+1]);
		}
	}
	return bubble_sorting(arr, n-1);
}

// print array
template <class T>
void print_array(T arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<< arr[i]<<endl;
	}
}

// driver code
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Sorting:"<<endl;
	print_array(arr,n);
	cout<<"After Sorting:"<<endl;
	bubble_sorting(arr,n);
	print_array(arr,n);
	return 0;
}