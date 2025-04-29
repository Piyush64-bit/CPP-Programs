#include <iostream>
using namespace std;

class Box {
    private:
        int size;
    public:
        Box(int s) {
            size = s;
        }

        int getSize() {
            return size;
        }
};
int main() {
    Box box1(5);
    cout << "Size: " << box1.getSize() << endl;
    return 0;
}
