#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(5, 3);
    return 0;
}
