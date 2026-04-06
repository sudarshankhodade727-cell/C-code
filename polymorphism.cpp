#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal *a;
    Dog d;
    Cat c;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}