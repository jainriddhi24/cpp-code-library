//WAP a c++ program to implement the concept of single inheritance...

#include <iostream>
using namespace std;

class Base
{
	private:
		int a;
	public:
		int b;
		void get_ab();
		int get_a();
		void show_a();
};
void Base :: get_ab()
{
	a = 10;
	b = 20;
}
int Base :: get_a()
{
	return a;
}
void Base :: show_a()
{
	cout << "A: " << a << endl;
}
class Derived : public Base
{
	private:
		int c;
	public:
		void multiplication();
		void display();
};
void Derived :: multiplication()
{
	c = b * get_a();
}
void Derived :: display()
{
	cout << "A: " << get_a() << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;
}
int main()
{
	Derived d;
	d.get_ab();
	d.multiplication();
	d.display();
	return 0;
}
