//WAP to swap a number...
#include <iostream>
using namespace std;

int main()
{
	int a = 15, b = 20;
	a = a+b;
	b = a-b;
	a = a-b;
	cout << "Swap A = " << a << endl;
	cout << "Swap B = " << b;
	return 0;
}
