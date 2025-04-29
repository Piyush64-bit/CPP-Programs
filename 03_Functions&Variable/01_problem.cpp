// Function & Variable
// -> it supports default arguments in a function.

# include <iostream>
using namespace std;
int add (int a , int b=3){
    return a+b;

};
int main (){
    cout << "addiion of 2 no is "<<add(3,4)<< endl;
    cout<< "addition of 2 no is "<<add (3)<<endl;
    return 0;
}
