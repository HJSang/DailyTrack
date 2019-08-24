/* Cpp to implement merge sort */
// MergerSort(arr,l,r)
// If r>1
// 1. Find the middle point: m = (l+r)/2
// 2. Call MergeSort for the first half.
// 3. Call MergeSort for the second half.
// 4. Merge the two halves sorted in step 2 and 3.
#include<iostream>
using namespace std;

// merge two sorted subarrays
template <class T>
void merge(T arr[], int l, int m, int r)
{
	int i,j,k;
	int n1 = m-l+1;
	int n2 = r-m;

	T L[n1], R[n2];
	// copy data 
	for(i=0; i<n1; i++)
	{
		L[i] = arr[l+i];
	}
	for(j=0; j<n2; j++)
	{
		R[j] = arr[m+1+j];
	}
	//Merge the two arrays.
	i=0;
	j=0;
	k=l;
	while(i <n1 && j <n2)
	{
		if(L[i]<=R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	//copy the remaining elements
	while(i<n1)
	{
		arr[k] = L[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}


// merge sort
template <class T>
void mergeSort(T arr[], int l, int r)
{
	if(l<r)
	{
		int m = l+(r-l)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);

		merge(arr,l,m,r);
	}
}

template <class T>
void print_array(T arr, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\n",arr[i]);
	}
}

int main()
{
	int arr[] = {12, 11, 13, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("%s\n", "Before Sorting");
	print_array(arr,n);
	printf("%s\n", "After Sorting");
	mergeSort(arr,0,n-1);
	print_array(arr,n);
	return 0;
}






