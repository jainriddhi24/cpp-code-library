//WAP to generate calendar of a month given the start day 
// and the number of day in that month...

#include <iostream>
#include <iomanip>
using namespace std;

void printCalendar(int startday, int daysinMonth)
{
    cout << "Sun Mon Tue Wed Thu Fri Sat \n";
    for (int i = 0; i < startday; i++)
    {
        cout << "    ";
    }

    // Loop to print the days of the month
    for (int day = 1; day <= daysinMonth; day++)
    {
        cout << setw(3) << day << " "; // Print the day number with padding
        // Move to the next line after every Saturday
        if ((day + startday) % 7 == 0)
        {
            cout << endl;
        }
    }
    cout << endl; // End the last line
}

int main()
{
    int startday, daysinMonth;

    // Get input from user for the start day and the number of days in the month
    cout << "Enter the starting day of the week (0 = Sun, 1 = Mon, 2 = Tue, 3 = Wed, 4 = Thu, 5 = Fri, 6 = Sat): ";
    cin >> startday;
    cout << "Enter the number of days in the month: ";
    cin >> daysinMonth;

    // Generate and print the calendar
    printCalendar(startday, daysinMonth);

    return 0;
}


