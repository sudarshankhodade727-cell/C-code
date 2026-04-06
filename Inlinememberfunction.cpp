#include <iostream>

class Calculator {
public:

    inline int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    int num1 = 10, num2 = 20;
    int sum = calc.add(num1, num2);
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    return 0;
}
