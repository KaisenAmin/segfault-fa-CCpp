#include <iostream>
#include <cstdlib>



int main() {
    int a, b;

    std::cout << "Enter a and b : ";
    std::cin >> a >> b;


    int sum{a + b};
    int sub{a - b};
    int mul{a * b};
    int div{a / b};
    int rem{a % b};

    std::cout << a << " + " << b << " = " << sum << std::endl;
    std::cout << a << " - " << b << " = " << sub << std::endl;
    std::cout << a << " * " << b << " = " << mul << std::endl;
    std::cout << a << " / " << b << " = " << div << std::endl;
    std::cout << a << " % " << b << " = " << rem << std::endl;
    

    return EXIT_SUCCESS;
}