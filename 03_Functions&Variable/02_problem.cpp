// Function & Variable
// Scope
// A> Local
// B> Global

#include <iostream>
using namespace std;
void test() {
    int local = 50;
    {
        int block = 5;
        cout<<"Block: "<<local<<"global: "<<endl;
    }
    cout<<"local: "<<local<<"global: "<<endl;
}
int main() {
    test();
    return 0;
    cout<<"block: "<<block<<endl;


}