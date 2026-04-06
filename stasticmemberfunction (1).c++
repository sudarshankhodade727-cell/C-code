#include <iostream>
using namespace std;

class Test {
    static int count;
public:
    static void set(int x) {
        count = x;
    }
    static int get() {
        return count;
    }
};

int Test::count = 0;

int main() {
    Test::set(5);
    cout << Test::get();
    return 0;
}
