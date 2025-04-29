// Run time Polymorphism

// This is called when a child class redefines a function of the base class.
// This is done using virtual functions.

#include <iostream>
using namespace std;

class Animal {
    public: 
    virtual void makeSound() {
        cout << "Animal makes sound." << endl;
    }
};

class Dog: public Animal {
    public:
    void makeSound() override { // Override the base class function
        cout << "Dog barks." << endl;
    }
};

class Cat: public Animal {
    public:
    void makeSound() override { // Override the base class function
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animalPtr; // Pointer to base class

    Dog dog;
    Cat cat;

    // Pointing to Dog object
    animalPtr = &dog;
    animalPtr->makeSound(); // Calls Dog's makeSound()

    // Pointing to Cat object
    animalPtr = &cat;
    animalPtr->makeSound(); // Calls Cat's makeSound()

    return 0;
}
