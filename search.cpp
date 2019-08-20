// CPP program to implement search algrorithms.
#include<iostream>
#include<math.h>
using namespace std;

// linear search
template <class T>
int linear_search(T arr[], T x, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

// binary search
template <class T>
int binary_search(T arr[], T x, int left, int right)
{
    int mid = (left+right)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    if(arr[mid]<x)
    {
        return binary_search(arr, x, mid+1, right);
    }
    else
    {
        return binary_search(arr, x, left, mid-1);
    }
    return -1;
}

// Jump Search
template <class T>
int jump_search(T arr[], T x, int n)
{
    // using the optimal step size
    int step = sqrt(n);
    // find interval arr[d*step] < x < arr[(d+1)*step]
    int d = 0;
    while (arr[min((d+1)*step, n-1)] < x)
    {
        if(d*step>=n)
        {
            return -1;
        }
        d = d + 1;
    }
    // linear search
    // from d*step to min(n-1, (d+1)*step)
    int index = d*step;
    while(arr[index] < x)
    {
        index ++;
        if(index == min(n-1, (d+1)*step))
        {
            return -1;
        }
    }
    if(arr[index]==x)
    {
        return index;
    }
    return -1;
}


//driver function
int main()
{
    int arr[] = {2,3,4,10,10};
    int x = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = linear_search(arr, x, n);
    cout<<"The target element is " << x << endl;
    (result == -1)? cout<<"Not Found!" << endl: cout<< "Linear Search: Element is at " << result<< endl;
    int result1 = binary_search(arr, x, 0, n-1);
    (result1 == -1)? cout<<"Not Found!" << endl: cout<< "Binary Search: Element is at " << result1<< endl;
    int result2 = jump_search(arr, x, n);
    (result2 == -1)? cout<<"Not Found!" << endl: cout<< "Linear Search: Element is at " << result2<< endl;

    return 0;
}
