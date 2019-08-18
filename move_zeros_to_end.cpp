//# Move all zeroes to end of array
//# Expected time complexity is O(n) and extra space is O(1).
//# Examples:
//# Input :  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
//# Output : arr[] = {1, 2, 4, 3, 5, 0, 0};
//
//# Solutions:
//# set count as the count of non-zero elements
//# put non-zero element back to arr[count]
//# append 0 unti the end

#include<iostream>
using namespace std;

void move_zeros(int arr[], int n)
{
    int count = 0, i;
    for (i=0; i<n ; i++)
    {
        if (arr[i] !=0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    // append 0
    while(count < n)
    {
        arr[count] =0;
        count++;
    }
}

void print_array(int arr[], int n)
{
    for(int i =0; i<n; i++)
    {
        cout << arr[i] << endl;
    }
}

// Driver program to test above function
int main()
{
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    move_zeros(arr,n);
    cout << "Array after pushing all zeros to end of array :\n";
    print_array(arr,n);
    return 0;
}
