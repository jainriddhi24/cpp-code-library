//WAP to insert a string in the main text...
#include <iostream>
#include <string>
using namespace std;
string insertString(const string& mainText, const string& insertText, int position) {
    if (position > mainText.length()) {
        position = mainText.length();
    }
    string updatedText = mainText.substr(0, position) + insertText + mainText.substr(position);
    return updatedText;
}
int main() {
    string mainText;
    getline(cin, mainText);
    string insertText;
    getline(cin, insertText);
    int position = 18;
    cout << "Main Text: " << mainText << endl;
    cout << "Insert Text: " << insertText << endl;
    string result = insertString(mainText, insertText, position);
    cout << "Updated text: " << result << endl;
    return 0;
}
