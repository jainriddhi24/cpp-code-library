// WAP to calculate the volume of cuboid using default argument.
#include <iostream>
using namespace std;
double volume(double l, double b, double h) 
{   
	return (l*b*h); 
}  
  
int main()  
{  
    double l,b,w;
    cout << "Enter Length, Breadth & height: ";
    cin >> l >> b >> w;
    cout << "Voulume of the cuboid is: " << volume(l,b,w) << endl;
    return 0;  
}
