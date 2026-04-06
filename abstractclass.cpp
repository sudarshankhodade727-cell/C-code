#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    virtual void area() = 0;   // Pure virtual function
};

// Derived class
class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void area()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r;
    r.getData();
    r.area();

    return 0;
}