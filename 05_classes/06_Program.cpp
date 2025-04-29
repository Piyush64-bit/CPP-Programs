// using constructors (multiple)
#include <iostream>

class Point {
    private: 
    int x, y;

    public:
    Point(): x(0), y(0) {}
    Point() (int a, int b): x(a), y(b) {}
    void print() {
        cout<<x" "<<y<<" "<<
    }
}