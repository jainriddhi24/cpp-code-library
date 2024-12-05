//WAP to interchange the largest and the smallest number in the array..

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    
    for (int i=0; i<n; i++)
    {
    	cin >> arr[i];
	}
	
	// find largest & smallest element in the array
	int maxIndex = 0, minIndex = 0;
	for(int i=0; i<n; i++)
	{
		if(arr[i] > arr[maxIndex])
		{
			maxIndex = i;
		}
		if(arr[i] < arr[minIndex])
		{
			minIndex = i;
		}
	}
	cout << "Largest & Smallest numbers: \n";
	cout << "Largest element: " << arr[maxIndex] << "\n";
    cout << "Smallest element: " << arr[minIndex] << "\n";
	
	// Swap it 
	int temp = arr[maxIndex];
	arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
    
    //After swapping 
    cout << "After Swapping: \n";
    cout << arr[maxIndex] << "\n";
    cout << arr[minIndex] << "\n";
    cout << "After swapped, the array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
