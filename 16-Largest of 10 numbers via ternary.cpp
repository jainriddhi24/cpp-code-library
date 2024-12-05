//WAP to display the largest of 10 number using ternary operator...

#include <iostream>
using namespace std;

int main() 
{
    int n[10], l;
    cout << "Enter a numbers: " << endl;
    for(int i=0; i<10; i++)
    {
    	cin >> n[i];
	}
	l = n[0];
	for(int i=1; i<10; i++)
	{
		l=(n[i] > l ? n[i] : l);
	}
	cout << "The largest number is: " << l <<endl;
    return 0;
}

