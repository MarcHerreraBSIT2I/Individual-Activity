// ACTIVITY 2 
// Herrera. Marc Errone R.
// BSIT - 2I

#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, course, birthday, motto;

    // Input section
    cout << "Enter your Full Name: ";
    getline(cin, fullName);

    cout << "Enter your Course, Yr. & Sec.: ";
    getline(cin, course);

    cout << "Enter your Birthday: ";
    getline(cin, birthday);

    cout << "Enter your Motto/Motivation in Life: ";
    getline(cin, motto);

    // Output section
    cout << "\nHi! I'm " << fullName << " of " << course
         << ". Welcome to Data Structures and Algorithm!" << endl;
    cout << "My Birthday is on " << birthday
         << ", and my motto/motivation in life is " << motto << endl;

    // DONE
    return 0;
}

