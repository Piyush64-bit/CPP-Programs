#include <iostream>
#include <array>
#include <string>
using namespace std;

int main() {
    array<int, 4> myArray = {20, 30, 40, 50};
    myArray[1] = 100;

    string mystring = "chal";
    mystring += "be";

    for (int x : myArray) {
        cout << x << endl;
    }

    cout << endl;
    return 0;
}