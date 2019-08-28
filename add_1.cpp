/* Add 1 to a given number.
Write a program to add one to a given number.
The use of operators like '+,-,*,/++,--' are not allowed.
*/
#include<iostream>
using namespace std;
/* method 1: flip all the bits after the rightmost 0 bit.
lip the rightmost 0 bit.
*/
int add_1_method1(int x)
{
	// position index from right to left 
	// start from 1
	// flip bits
	int index = 1;
	while(x&index)
	{
		x = x^index;
		index <<=1;
	}
	// flip bit
	x = x^index;
	return x;
}

// method 2: ~x = -(x+1) [ ~ is for bitwise complement ]
int add_1_method2(int x)
{
	return (-(~x));
}


int main()
{
	cout<<add_1_method1(13)<<endl;
	cout<<add_1_method2(13)<<endl;
	return 0;
}