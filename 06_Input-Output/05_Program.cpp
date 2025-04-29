// Exceptional handling in c++
// a> thow - signals an error
// b> try - name the code that might get failed
// c> catch - handles errors

#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) throw "divide by zero";
    return a/b;
};

int main () {
try {
    cout << divide (10, 2) << endl;
    cout << divide (10,0) << endl;
}
catch (const char * msg) {
    cerr << "error hai bhai: " << msg << endl;
}
return 0;

}