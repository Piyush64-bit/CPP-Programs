// Create a rectangle class with default and parameterized constructor

#include <iostream>
using namespace std;

class Rectangle {
    private:
    float length, width;

    public:
    Rectangle(): length(0), width(0) {}

    Rectangle(float l, float w): length(l), width(w) {}

    void Print() {
        cout << length << " X " << width << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5.04f, 3.0f);

    r1.Print();
    r2.Print();

    return 0;
}