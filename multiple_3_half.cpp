/* Multiply a given Integer with 3.5
Given a integer x, write a function that multiplies 
x with 3.5 and returns the integer result. 
You are not allowed to use %, /, *.
*/

/*  We can get x*3.5 by adding 2*x, x and x/2. 
To calculate 2*x, left shift x by 1 
and to calculate x/2, right shift x by 2.
*/

#include<iostream>
using namespace std;

int MultipleWith3Point5(int x)
{
	return (x<<1) + x + (x>>1);
}

// (8*x – x)/2
int MultipleWith3Point5_v2(int x)
{
	return ((x<<3) -x)>>1;
}

int main()
{
    int x = 4;
    cout<< MultipleWith3Point5(4)<<endl;
    cout<< MultipleWith3Point5_v2(4)<<endl;
	return 0;
}