// Inheritance

#include <iostream>
using namespace std;
class Animal {
    public:
    void eat() {
        cout<<"this animal eats food"<<endl;
    }
};
class Dog: public Animal {
    public:
    void Bark() {
        cout<<"dog barks"<<endl;
    }
};

int main() {
    Dog denver;
    denver.eat();
    denver.Bark();
    return 0;
}