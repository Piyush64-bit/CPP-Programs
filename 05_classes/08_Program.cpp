// Using Destructor

// desctructor are used when we want to freee the memory after we use

#include <iostream>
using namespace std;

class Resource {
    private:
    int *data;

    public:
    Resource() {
        data = new int;
        *data = 42;
        cout << "allocated" << endl;
    };
    ~Resource() {
        delete data;
        cout << "freed" << endl;
    }
    int getData() {
        return *data;
    };
};

int main () {
    Resource r;
    cout << "data: " << r.getData() << endl;
    return 0;
}