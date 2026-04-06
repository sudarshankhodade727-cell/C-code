#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    virtual void display()
    {
        cout << "Display function of Base class" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    void display()
    {
        cout << "Display function of Derived class" << endl;
    }
};

int main()
{
    Base *ptr;
    Derived d;

    ptr = &d;

    // Virtual function call
    ptr->display();

    return 0;
}