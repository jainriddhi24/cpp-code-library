// WAP to compare 2 strings.
#include <iostream>
using namespace std;
 
void relationalOperation(string s1, string s2)
{
 
    if (s1 != s2) 
    {
        cout << s1 << " is not equal to " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " is greater than " << s2 << endl;
        else
            cout << s2 << " is greater than " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}
int main()
{
    string s1("Yaama");
    string s2("forYaama");
    relationalOperation(s1, s2);
    string s3("yaama");
    string s4("yaama");
    relationalOperation(s3, s4);
    return 0;
}
