#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    Student(int r) {
        roll = r;
    }
    Student(const Student &s) {
        roll = s.roll;
    }
};

int main() {
    Student s1(101);
    Student s2 = s1;
    return 0;
}
