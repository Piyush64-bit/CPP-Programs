// Variable: Creation and dynamic data
// Ex. Dynamically create an int, with new keyword. set it to 10, define a structure with a method and print both.

#include <iostream>
using namespace std;

struct cordinates
{
    int x, y;
    void print() {
        cout<<"Coordinates are: "<<x<<" "<<y<<endl;
    }
};
int main() {
    int *ptr = new int;
    *ptr = 10;
    cordinates c{3, 4};
    cout<<"Dynamic values are: "<<*ptr<<endl;
    c.print();
    delete ptr;
    cout<<"Dynamic values are: "<<*ptr<<endl;
    return 0;

}