#include <iostream>
using namespace std;

// Template function
template <class T>
void swapNumbers(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before Swapping: " << x << " " << y << endl;

    swapNumbers(x, y);

    cout << "After Swapping: " << x << " " << y << endl;

    return 0;
}