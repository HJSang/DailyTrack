/*Compute modulus division by a power-of-2-number
Compute n modulo d without division(/) and modulo(%) operators,
 where d is a power of 2 number.
 */

/* Let ith bit from right is set in d.
For getting n modulus d,
we just need to return 0 to i-1 (from right) 
bits of n as they are and other bits as 0.
*/

#include<iostream>
using namespace std;

unsigned int getModulo(unsigned int n, unsigned int d)
{
	return (n & (d-1));
}

int main()
{
	unsigned int n = 6;
	unsigned int d = 4;
	cout<< n << " modulo " << d << " is " << getModulo(n,d) << endl;
	return 0;
}