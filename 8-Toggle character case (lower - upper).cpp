//WAP to enter any character. If the entered character is in lower case, convert it into upper case. 
//If it is lower case character than convert, it into upper case....
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char a, b;
	cout << "Enter any charcter: ";
	cin >> b;
	if(isupper(b))
	{
		a = tolower(b);
		cout << "Convert lower case: " << a;
	}
	else
	{
		a = toupper(b);
		cout << "Convert upper case: " << a;
	}
	return 0;
}
