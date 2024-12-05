//WAP a c++ program to implement the concept of mutliple inheritance...

#include <iostream>
using namespace std;
class Base1
{
	protected:
		int m;
	public: 
		void get_m(int);
};
class Base2
{
	protected:
		int n;
	public:
		void get_n(int);
};
void Base1 :: get_m(int x)
{
	m = x;
}
void Base2 :: get_n(int y)
{
	n = y;
}
class Derived : public Base1 , public Base2
{
	public:
		void display();
};
void Derived :: display()
{
	cout << "M: " << m << endl;
	cout << "N: " << n << endl;
	cout << m*n << endl;
}
int main()
{
	Derived d;
	d.get_m(10);
	d.get_n(80);
	d.display();
	return 0;
}
