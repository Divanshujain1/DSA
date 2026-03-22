#include<iostream>
using namespace std;
int main() {
   char ch;

    cout << "Enter a character: ";
    cin >> ch;
    
    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase Letter" << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase Letter" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Numeric Digit" << endl;
    }
    else {
        cout << "Special Character" << endl;
    }

    return 0;
}
