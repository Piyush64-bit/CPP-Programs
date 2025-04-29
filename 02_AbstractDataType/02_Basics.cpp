// Queue
// -> FIFO (First In First Out)

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue <int> myqueue;
    myqueue.push(10);
    myqueue.push(20);
    myqueue.push(30);
    while(!myqueue.empty()) {
        cout<<myqueue.front()<<" ";
        myqueue.pop();
    }
    return 0;
}