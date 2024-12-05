//WAP to swap 2 numbers using temproary variable...
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter the numbers:" << endl;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	//Swapping Elements
	int temp = a;
	a = b;
	b = temp;
	cout << "Swapped Numbers: ";
	cout << "A: " << a << endl;
	cout << "B: " << b;
	return 0;
}
