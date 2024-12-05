//WAP to calculate the distance between two points..
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1, x2, y1, y2;
	float dis;
	cout << "Enter the values of x1, x2, y1, y2: ";
	cin >> x1 >> x2 >> y1 >> y2;
	dis = sqrt (pow((x2 - x1),2) + pow((y1 - y2), 2));
	cout << "Distance: " << dis << endl;
	return 0;
}
