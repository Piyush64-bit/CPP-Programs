// Inheritace & Exception

#include <iostream>
using namespace std;

class Matherror {};

class Overflowerror : public Matherror {};
int add (int a, int b) {
    if (a>100 || b>100) throw Overflowerror();
    return a+b;
};
int main() {
    try{
        cout << add(150, 50) << endl;
    }
    catch (const Matherror &e) {
        cerr << "Matherror Occured" << endl;
    }
    return 0;
}