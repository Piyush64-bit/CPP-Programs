#include <iostream>

using namespace std;

void getName(string a)
{
    cout << "Enter your name: " << a << endl;
    clog << "Your Function exicuted successfully" << endl;
};

void getAge(int num)
{
    cout << "Enter your age: " << num << endl;
    clog << "Your Function exicuted successfully" << endl;
};

int main()
{
    string name;
    int num;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> num;

    if (num < 5)
    {
        cerr << "Error: Ishan tum bhaut chote ho." << endl;
    }
    else
    {
        getName(name);
        getAge(num);
    }

    return 0;
}
