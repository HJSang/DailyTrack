/* Rcpp function to detect if two intergers have opposite disgn.
*/
#include<iostream>
using namespace std;

// for 32 bit integer:
bool opposite_signs(int x, int y)
{
	return ((x^y)>>31);
}

int main()
{
	int x =1;
	int y = -100;
	if(opposite_signs(x,y))
		cout<<"Signs are opposite!"<<endl;
	else
		cout<<"Signs are not opposite!"<<endl;
}