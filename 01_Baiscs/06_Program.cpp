// Polymorphism - comiple time 

#include <iostream>
using namespace std;
class Animal {
    public:
    void eat virtual() {
        cout<<"this animal eats food"<<endl;
    }
};
class Dog: public Animal {
    public:
    void makek() {
        cout<<"dog barks"<<endl;
    }
};

int main() {
    Dog denver;
    denver.eat();
    denver.Bark();
    return 0;
}