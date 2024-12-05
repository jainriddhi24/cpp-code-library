// WAP to display the name of the colors using enumerated types.
#include <iostream>
using namespace std;

enum Colors {
    RED, GREEN, BLUE, YELLOW, ORANGE
};

int main() {
    Colors color;

    cout << "Enter a number (0 - 4): ";
    int choice;
    cin >> choice;

    if (choice < 0 || choice > 4) {
        cout << "Invalid choice! Please enter a number between 0 and 4." << endl;
        return 1;
    }

    color = static_cast<Colors>(choice);

    cout << "You selected: ";
    switch (color) {
        case RED:
            cout << "RED" << endl;
            break;
        case GREEN:
            cout << "GREEN" << endl;
            break;
        case BLUE:
            cout << "BLUE" << endl;
            break;
        case YELLOW:
            cout << "YELLOW" << endl;
            break;
        case ORANGE:
            cout << "ORANGE" << endl;
            break;
        default:
            cout << "Invalid color!" << endl;
    }

    return 0;
}

