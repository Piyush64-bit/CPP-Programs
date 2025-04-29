// compile time polymorphism
// function overloading allows, multiple   f(n)'s to have the same name with diffrent paramenters

#include <iostream>
using namespace std;

class Math {
    public :
    int add(int a, int b) {
        return a + b;
    }
    int add (int a, int b, int c) {
        return a + b + c;
    }
    float add (float a, float b) {
        return a + b;
    }

};

int main() {
    Math obj;
    cout << "Sum of 2 & 3 is: " << obj.add (2,3) << endl;
    cout << "Sum of 10, 20 & 30 is: " << obj.add (10, 20, 30) << endl;
    cout << "Sum of 2.5 & 3.72 is: " << obj.add (2.5f, 3.72f) << endl;

    return 0;
}