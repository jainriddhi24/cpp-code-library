//WAP to find the second largest number using an array of n numbers...

#include <iostream>
using namespace std;

int main()
{
    int n;
	cout << "Enter the number of elements of the array: ";
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];	
	}  
	int largest = arr[0], secondLargest = -1;
	// Find the largest and second largest elements
	for(int i=1; i<n; i++)
	{
		if(arr[i] > largest)
		{
			secondLargest = largest;
			largest = arr[i];
		}
		else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];   // Update second largest
        }
	}
	if(secondLargest == -1) {
        cout << "There is no second largest element (all elements might be equal)." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }
    return 0;
}
