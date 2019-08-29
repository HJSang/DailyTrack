/* Rotate bits of a number.
Bit Rotation: circular shift
shift except that the bits that 
fall off at one end are put back 
to the other end.
*/
#include<iostream>
using namespace std;

#define INT_BITS 32

class bit_rotation
{
public:
	int leftRotate(int n, unsigned int d)
	{
		return (n<<d) | (n>>(INT_BITS-d));
	}

	int rightRotate(int n, unsigned int d)
	{
		return (n>>d) | (n<<(INT_BITS-d));
	}
};

int main()
{
	bit_rotation br;
	int n = 16;
	int d = 2;
	cout << "Left Rotation of " << n << " by " << d << " is ";
	cout << br.leftRotate(n,d) << endl;
	cout << "Right Rotation of " << n << " by " << d << " is ";
	cout << br.rightRotate(n,d) << endl;
	getchar();
}
