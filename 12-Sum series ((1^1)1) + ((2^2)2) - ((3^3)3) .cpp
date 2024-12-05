//WAP to sum the series:
//						((1^1)/1) + ((2^2)/2) - ((3^3)/3) + ....................

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum = 0;
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        double term = pow(i, i) / i;
        
        if(i % 2 == 0)
        {
            sum += term;  // Add the even terms
        }
        else
        {
            sum -= term;  // Subtract the odd terms
        }
    }

    cout << "The sum of the series is: " << sum << endl;
    return 0;
}
