// WAP to calculate exp(x,y) using recursive function..
#include <iostream>
using namespace std;

int exp(int x, int y)
{
	if(y!=0)
	{
		return x*exp(x, y-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int x, y;
	cout << "Enter the base number:";
	cin >> x;
	cout << "Enter the exponent:";
	cin >> y;
	cout << x << "^" << y << " is: " << exp(x,y);
	return 0;
}
