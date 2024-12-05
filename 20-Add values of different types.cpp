// WAP to add two values of different data types.
#include <iostream>
using namespace std;

void add(int a, float b) 
{   
    cout << "Sum " << a << " & " << b << " is: " << a + b << endl;
}
void add(int a, char b) 
{   
    cout << "Sum " << a << " & " << b << " is: " << a + b << endl;
}    
int main()  
{  
	int a;
    float b;
    char c;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    add (a,b);  
	cout << endl;
	cout << "Enter the two numbers: ";
    cin >> a >> c;
    add (a,c); 
    return 0;  
}
