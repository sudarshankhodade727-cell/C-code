#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int a) {
        x = a;
    }
    friend void show(A a);
};

void show(A a) {
    cout << a.x;
}

int main() {
    A obj(50);
    show(obj);
    return 0;
}
