//WAP to perform addition, substraction, multiplication and division on 2 integer numbers..
#include <iostream>
using namespace std;
int main()
{
	int a, b, add, substract, multiply;
	float division;
	cout << "Enter Integers: " << endl;
	cin >> a >> b;
	add = a+b;
	substract = a-b;
	multiply = a*b;
	division = a/(float)b;
	cout << "Add: " << add << endl;
	cout << "Substract: " << substract << endl;
	cout << "Multiplication: " << multiply << endl;
	cout << "Division: " << division;
	return 0;
}
