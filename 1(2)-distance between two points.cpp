//WAP to calculate the distance between two points..
#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double x2, double y1, double y2)
{
	return sqrt (pow((x2 - x1),2) + pow((y1 - y2), 2));
}
int main()
{
	cout << distance(3, 4, 4, 3) << endl;
	return 0;
}
