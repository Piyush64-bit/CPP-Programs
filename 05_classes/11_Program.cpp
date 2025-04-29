#include <iostream>

using namespace std;

class Matrix
{
public:
    int a, b;
    Matrix(int x, int y) : a(x), b(y) {}
    Matrix operator*(const Matrix &m)
    {
        return Matrix(a * m.a, b * m.b);
    }
    void Print()
    {
        cout << " " << a << " " << b << endl;
    };
};

int main()
{
    Matrix m1(2, 3), m2(4, 5);
    Matrix m3 = m1 * m2;
    m3.Print();
    return 0;
}