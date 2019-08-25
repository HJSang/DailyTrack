/* Generate integer from 1 to 7 with equal probability*/
/* Given a function foo() that returns integers 
from 1 to 5 with equal probability
write a function that returns integers
from 1 to 7 with equal probability using foo() only.
 Minimize the number of calls to foo() method. 
 Also, use of any other library function is not allowed 
 and no floating point arithmetic allowed.
 */

#include<iostream>
#include<cstdlib>
using namespace std;

// generate intergers from 1 to 5
int foo()
{
	int num = rand() % 5 + 1;
	return num;
}

// 
int my_random()
{
	int i;
	i = 5*foo() + foo() -5;
	if(i<22)
	{
		return i%7 +1;
	}
	return my_random();
}

int main()
{
	cout<< my_random()<<endl;
	return 0;
}