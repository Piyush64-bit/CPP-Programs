Lakshya Yadav
8:20 AM
Example 1: Swapping two numbers using pointers
Lakshya Yadav
8:37 AM
// Example 2: Dynamic memory allocation using pointers
// take 2 numbers as an input from the user, create a function to add them, now create a pointer to the function and modify its value and print the updated value of the pointer and the function
Lakshya Yadav
8:44 AM
Solution-#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Modified function that adds 10 to the sum
int modifiedAdd(int a, int b) {
    return a + b + 10;
}

int main() {
    int num1, num2;

    // Input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Declare a function pointer
    int (*funcPtr)(int, int);

    // Pointing to 'add' function
    funcPtr = add;
    printf("Result using add: %d\n", funcPtr(nu
Lakshya Yadav
8:56 AM
//Create a Class, create a constructor of the class thhen , create a variable in private assign a value in the public using constructor call the construcotre and print the object resuilts
Lakshya Yadav
9:01 AM
#include<iostream>
using namespace std;

class Math{
    private :
    int x;
    public: 
     Math(int a): x(a){};
     void print(){
    cout<<"the value of x is :"<<x<<endl;
}
};


int main(){
   Math obj1(2);
   obj1.print();
   return 0;
   
}
dfy-qzbv-nqr