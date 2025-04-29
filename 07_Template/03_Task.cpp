// P I Y U $ H
#include <iostream>
using namespace std;

template <typename Num>
Num addition (Num a, Num b)
{
    return a + b;
}
template <typename Num>
Num subtraction (Num a, Num b)
{
    return a - b;
}
template <typename Num>
Num multiplication (Num a, Num b)
{
    return a * b;
}
template <typename Num>
Num division (Num a, Num b)
{
    return a / b;
}

int main() {
    float a, b;
    int input;
    cout << "-------------Welcome to Simple Calculator!-----------------" << endl;
    cout << "Give two numbers: " << endl;
    cin >> a >> b;
    cout << "Avaliable task to perform:-\n1. Addition\n2.Subtraction\n3.Multiplication\n4.Division" << endl;
    cin >> input;
    if (input == 1) {
        cout << "And the answer is: " << addition(a, b) << endl;
    }
    else if (input == 2) {
        cout << "And the answer is: " << subtraction(a, b) << endl;
    }
    else if (input == 3) {
        cout << "And the answer is: " << multiplication(a, b) << endl;
    }
    else if (input == 4) {
        cout << "And the answer is: " << division(a, b) << endl;
    }
    else {
        cout << "Chala ja " << endl;
    }


    return 0;
}