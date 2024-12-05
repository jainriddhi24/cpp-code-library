// WAP to calculate the area of a circle using function.
#include <iostream>
using namespace std;
float calculateArea(float radius) 
{   
    const float PI = 3.14159;
	return (PI * radius *radius); 
}  
  
int main()  
{  
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    float area = calculateArea(r);
    cout << "The area of the circle is: " << area << endl;
    return 0;  
}
