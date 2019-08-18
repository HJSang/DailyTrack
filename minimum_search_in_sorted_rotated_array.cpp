/* CPP program to search the minimum in
 a sorted and rotated array.
 Solution: Binary search
 */
#include<iostream>
using namespace std;

int binary_search(int arr[], int left, int right)
{
    // not rotated
    if (right < left)
    {
        return arr[0];
    }
    if(right==left)
    {
        return arr[left];
    }
    // define middle
    int mid = (right+left)/2;
    //check the minimum condition
    if (mid < right && arr[mid] < arr[mid-1])
    {
        return arr[mid];
    }
    // check which side
    if (mid > left && arr[mid]<arr[right])
    {
        return binary_search(arr, left, mid-1);
    }
    else{
        return binary_search(arr, mid+1, right);
    }
}

// Driver program to test above functions
int main()
{
    int arr1[] = {5, 6, 1, 2, 3, 4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << "The minimum element is " << binary_search(arr1, 0, n1-1) << endl;
    
    int arr2[] = {1, 2, 3, 4};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << "The minimum element is " << binary_search(arr2, 0, n2-1) << endl;
    
    int arr3[] = {1};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    cout<<"The minimum element is "<<binary_search(arr3, 0, n3-1)<<endl;
    
    int arr4[] = {1, 2};
    int n4 = sizeof(arr4)/sizeof(arr4[0]);
    cout<<"The minimum element is "<<binary_search(arr4, 0, n4-1)<<endl;
    
    int arr5[] = {2, 1};
    int n5 = sizeof(arr5)/sizeof(arr5[0]);
    cout<<"The minimum element is "<<binary_search(arr5, 0, n5-1)<<endl;
    
    int arr6[] = {5, 6, 7, 1, 2, 3, 4};
    int n6 = sizeof(arr6)/sizeof(arr6[0]);
    cout<<"The minimum element is "<<binary_search(arr6, 0, n6-1)<<endl;
    
    int arr7[] = {1, 2, 3, 4, 5, 6, 7};
    int n7 = sizeof(arr7)/sizeof(arr7[0]);
    cout << "The minimum element is " << binary_search(arr7, 0, n7-1) << endl;
    
    int arr8[] = {2, 3, 4, 5, 6, 7, 8, 1};
    int n8 = sizeof(arr8)/sizeof(arr8[0]);
    cout << "The minimum element is " << binary_search(arr8, 0, n8-1) << endl;
    
    int arr9[] = {3, 4, 5, 1, 2};
    int n9 = sizeof(arr9)/sizeof(arr9[0]);
    cout << "The minimum element is " << binary_search(arr9, 0, n9-1) << endl;
    
    return 0;
}
