// Unformatted I/O

// put() => writes one character to output
// get() => reads one character from input
// getline() => reads a line as a raw string

#include <iostream>
using namespace std;

int main() {
    // Using put() to output single characters
    cout.put('H');
    cout.put('i');
    cout << endl;

    // Using get() to read a single character
    char c;
    cout << "Enter a character: ";
    cin.get(c);
    cout << "Echo: ";
    cout.put(c);
    cout << endl;

    return 0;
}

