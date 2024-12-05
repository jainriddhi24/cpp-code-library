//WAP to classify a given number is positive..
#include <iostream>
using namespace std;

int main()
{
	int n, i;
	bool isPrime = true;
	cout << "Enter a positive number: ";
	cin >> n;
	if(n<2)
	{
		isPrime = false;
	}
	else
	{
		for(i=2; i<=n/2; i++)
		{
			if(n%i==0)
			{
				isPrime =false;
				break;
			}
		}
	}
	if(isPrime)
	{
		cout << n << " is a prime number. " << endl;
	}
	else
	{
		cout << n << " is a composite number. " << endl;
	}
	return 0;
}
