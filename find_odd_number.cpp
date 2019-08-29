/* Find the Number Occuring Odd Number of Times.
Given an array of positive integers.
All numbers occur even number of times except one number.
Find the number in O(n) time & constant space.
*/
#include<iostream>
using namespace std;

int find_odd_number(int arr[], int n)
{
	int res = 0;
	for(int i = 0; i < n; i++)
	{
		res = res^arr[i];
	}
	return res;
}

int main()
{
	int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i =0; i<n; i++)
	{
		cout<< arr[i] << endl;
	}
	cout << "The number which only accurs odd number of times is : ";
	cout << find_odd_number(arr, n);
	getchar();
}