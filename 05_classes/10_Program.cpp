// Operator Overloading

#include <iostream>
using namespace std;

class Time {
    public:
    int hours, minutes;
    Time(int h, int m): hours(h), minutes(m) { }
    Time operator+(Time other) {
        int totalmins = minutes + other.minutes + (hours+other.hours)*60;
        return Time (totalmins/60, totalmins%60);
    }
    void print() {
        cout << hours << "H" << minutes << "Min" << endl;
    };
};

int main () {
    Time t1 (1, 30), t2 (2, 45);
    Time t3 = t1 + t2;
    t3.print();
    return 0;
}