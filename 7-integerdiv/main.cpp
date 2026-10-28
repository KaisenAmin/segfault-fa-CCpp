#include <iostream>
#include <cstdlib>
#include <iomanip>


int main() {
    int a, b;

    std::cout << "Enter a : ";
    std::cin >> a;
    std::cout << "Enter b : ";
    std::cin >> b;

    int div = a / b;
    float perDiv = (float)a / b;

    std::cout << div << std::endl;
    std::cout << std::setprecision(3) << std::fixed << perDiv << std::endl;
    

    std::cout << -7 / 2 << std::endl;
    std::cout << 7 % -2 << std::endl;


    return EXIT_SUCCESS;
}