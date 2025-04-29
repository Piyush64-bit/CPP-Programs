#include <iostream>
#include <cstring> // for strlen and strcpy
using namespace std;

template <typename T>
class Box {
private:
    T value;
public:
    void set(T v) {
        value = v;
    }
    T get() {
        return value;
    }
};

// Specialization for char*
template<>
class Box<char*> {
private:
    char* value;
public:
    void set(const char* v) {
        value = new char[strlen(v) + 1]; // allocate memory
        strcpy(value, v); // copy content
    }
    char* get() {
        return value;
    }
    ~Box() {
        delete[] value; // free memory
    }
};

int main() {
    Box<int> intBox;
    intBox.set(42);
    cout << intBox.get() << endl;

    Box<char*> strBox;
    strBox.set("Hello");
    cout << strBox.get() << endl;

    return 0;
}