// Abstraction -> hinding implementatin detaials

#include <iostream>
using namespace std;

class Car
{
public:
    void start()
    {
        igniteEngine();
        cout<<"Car Started: "<<endl;
    }
private:
    void igniteEngine() {
        cout<<"engine ignited"<<endl;
    }
};

int main() {
    Car myCar;
    myCar.start();
    return 0;
}