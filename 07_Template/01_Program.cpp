//Templates in C++
//1.Templates can store any data type, any variable, any function
//2. we can easily customize any created template 


#include <iostream> 
using namespace std;

template <typename P>
P add (P a, P b)
{
    return a+b;
}
template <typename A>
A subtraction (A a, A b)
{
    return a-b;
}
template <typename B>
B multiplication (B a, B b)
{
    return a*b;
}
template <typename C>
C division (C a, C b)
{
    return a/b;
}


int main() {
    cout << add(69,69) << endl;
    cout << subtraction(69,69) << endl;
    cout << multiplication(69,69) << endl;
    cout << division(69,69) << endl;
    return 0;
}

