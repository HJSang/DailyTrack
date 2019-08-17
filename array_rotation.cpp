// C++ program for right rotation
#include<iostream>
using namespace std;
// function to reverse arr from index start to end

void reverse_any(int arr[], int start, int end)
{
	while (start < end)
	{
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

// rotate all array 
// rotate the first k 
// rotate the last n-k
void right_reverse(int arr[], int n, int k)
{
	reverse_any(arr, 0, n-1);
	reverse_any(arr, 0, k-1);
	reverse_any(arr, k, n-1);
}

//traverse array
void print_array(int arr[], int n)
{
	for (int i =0; i<n; i++)
	{
		cout<< arr[i] << endl;
	}
}

// driver function 
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	print_array(arr,n);
	cout<<"________________"<<endl;
	right_reverse(arr,n,k);
	print_array(arr,n);
	return 0;
}