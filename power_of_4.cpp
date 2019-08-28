/*Find whether a given number is a power of 4 or not
Given an integer n, find whether it is a power of 4 or not.
*/
#include<iostream>
using namespace std;

/* method 1: iteratively r = n%4 ; n = n/4;
If all r = 0, return true
else return false
*/

bool IsPowerOf4_v1(unsigned int n)
{
	int r;
	while(n>1)
	{
		r = n%4;
		if(r)
			return false;
		else
			n = n/4;
	}
	return true;
}


/* There is only one bit set in the binary 
representation of n (or n is a power of 2
The count of zero bits before the (only) set bit is even
*/
bool IsPowerOf4_v2(unsigned int n)
{
	int count = 0;
	if(n && !(n&(n-1)))
	{
		while(n>1)
		{
			n >>=1;
			count +=1;
		}
		return (count%2 ==0)? 1:0;
	}
	return 0;
}

int main()
{
	int n = 64;
	if(IsPowerOf4_v1(n))
	{
		cout<< n << " is a power of 4." << endl;
	}
	else
	{
		cout<< n << " is not a power of 4." << endl;
	}
	if(IsPowerOf4_v2(n))
	{
		cout<< n << " is a power of 4." << endl;
	}
	else
	{
		cout<< n << " is not a power of 4." << endl;
	}
}