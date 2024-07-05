#include <iostream>


int main() {
    // Declare a variable
    int a = 10;
    float b = 8.754;

    double c = a+b;

    std::cout << "a = " << a <<'\n';
    std::cout << "b = " << b << '\n';
    std::cout << a << " + " << b << " = " << c << '\n';

    std::cout << "Size of a = " << sizeof(a) << '\n';
    std::cout << "Size of b = " << sizeof(b) << '\n';
    std::cout << "Size of c = " << sizeof(c) << '\n';

    short x = 3387;

    std::cout << x <<'\n';

    signed char c1 = 'a';

    std::cout << "c1 = " << c1 << '\n';
    std::cout << "Size of c1 is " << sizeof(c1) << '\n';

    return 0;
}