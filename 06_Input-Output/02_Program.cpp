// Manipulator - iska mtlb hota hai, value ko modify krna
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float f = 123.45678;
    int i = 9;
    cout << fixed << setprecision(2) << f << endl;
    cout << setw(2) << i << endl;
        return 0;
}