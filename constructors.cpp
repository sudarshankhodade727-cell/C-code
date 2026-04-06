#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo() {
        x = 0;
    }
    Demo(int a) {
        x = a;
    }
    Demo(const Demo &d) {
        x = d.x;
    }
};

int main() {
    Demo d1;
    Demo d2(10);
    Demo d3 = d2;
    return 0;
}
