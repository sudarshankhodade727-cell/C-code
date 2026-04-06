#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) {
        length = l;
    }
    friend int getLength(Box b);
};

int getLength(Box b) {
    return b.length;
}

int main() {
    Box b1(10);
    cout << getLength(b1);
    return 0;
}

