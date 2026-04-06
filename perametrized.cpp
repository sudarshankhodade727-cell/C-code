#include <iostream>
using namespace std;

class Sample {
    int a, b;
public:
    Sample(int x, int y) {
        a = x;
        b = y;
    }
    void display() {
        cout << a << " " << b;
    }
};

int main() {
    Sample s1(5, 10);
    s1.display();
    return 0;
}
