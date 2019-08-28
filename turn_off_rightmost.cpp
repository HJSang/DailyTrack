/*Turn off the rightmost set bit
Write a program that unsets the rightmost set bit of an integer.
*/
#include<iostream>
using namespace std;

/*Let the input number be n. 
n-1 would have all the bits flipped 
after the rightmost set bit (including the set bit).
*/

int turn_off_rightmost(int x)
{
	return x & (x-1);
}

int main()
{
	int n = 7;
	cout<< n<<endl;
	cout<< turn_off_rightmost(n) <<endl;
	return 0;
}