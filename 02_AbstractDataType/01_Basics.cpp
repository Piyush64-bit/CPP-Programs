// ADT -> Abstract data type.
// -> Think of ADT as custom data structure, that lets you store and manipulate data, but hides how the operations are performed.

// -> A. STACK (Vertical)
// -> B. QUEUE (----------------Horizontal-------------------)

// A. Stack
// ->Vertical Arrangement of data.
// ->LIFO Principle (last in first out)
// ->push - add data to top.
// ->pop - remove to top.


#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack <int> mystack;

    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    while(!mystack.empty()) {
        cout<<mystack.top()<<" ";
        mystack.pop();
    }
    return 0;
}

// Operations in a Stack

// a> pop()

// b> push()

// c> top()

// d> is empty()