#include <iostream>
using namespace std;

class Circle {
    private:
    float radius;

    public:
    void setradius(float r) {
        radius = r;
    }

    float area(); // Declare the area function inside the class
};

// Define the area function outside the class
float Circle::area() {
    return 3.14f * radius * radius;
}

int main() {
    Circle c;
    c.setradius(2.0f); // Set the radius of the circle
    cout << "Area: " << c.area() << endl; // Calculate and print the area

    return 0;
}