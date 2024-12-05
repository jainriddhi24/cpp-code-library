// WAP to find the next date using unary increment operator.
#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    Date operator++() {
        int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth[1] = 29;
        }

        day++;
        if (day > daysInMonth[month - 1]) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }

        return *this;
    }
    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    int day, month, year;
    cout << "Enter a date (day month year): ";
    cin >> day >> month >> year;

    Date date(day, month, year);
    cout << "Current date: ";
    date.display();

    ++date; 
    cout << "Next date: ";
    date.display();

    return 0;
}

