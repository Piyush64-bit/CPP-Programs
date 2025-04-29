// #Instantiationg using classes 

// Instantiating = creating object from a class - each gets its own memory

// Access members with . (dot)

#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    void set(int a, int b) {
        x = a;
        y = b;
    }
};
int main() {
    Point p1, p2;

    p1.set(1, 2);
    p2.set(3, 4);

    cout << "p1: " << p1.x << "," << p1.y << endl;
    cout << "p2: " << p2.x << "," << p2.y << endl;

    return 0;
}
