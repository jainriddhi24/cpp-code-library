// WAP to enter a text that contains multiple lines. 
// Display the n lines of text starting from m line....
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int totalLines, m, n;
    vector<string> lines;
    string input;
    
    cout << "Enter the number of lines of text: ";
    cin >> totalLines;
    cin.ignore(); 
    
    cout << "Enter the text (each line):" << endl;
    for (int i = 0; i < totalLines; ++i) {
        getline(cin, input);
        lines.push_back(input);
    }
    
    cout << "Enter the starting line number (m): ";
    cin >> m;
    cout << "Enter the number of lines to display (n): ";
    cin >> n;
    
    cout << "Displaying lines from line " << m << " to line " << (m + n - 1) << ":" << endl;

    if (m < 1 || m > totalLines || n < 1) {
        cout << "Invalid input for m or n." << endl;
    } else {
        for (int i = m - 1; i < totalLines && i < m - 1 + n; ++i) {
            cout << lines[i] << endl;
        }
    }

    return 0;
}
