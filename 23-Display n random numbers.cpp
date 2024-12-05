// WAP to read and display n random numbers using an array..
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number of random numbers to generate: ";
	cin >> n;
	
	int arr[n];
	// Seed the random number generator with the current time
    srand(time(0));
    for(int i=0; i<n; i++)
    {
    	arr[i] = rand()%100;
	}
	cout << "Random numbers are: ";
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
