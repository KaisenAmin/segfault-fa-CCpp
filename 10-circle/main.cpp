#include <iostream>
#include <cstdlib>
#include <iomanip>

// #define PI 3.141596


int main() {
    float radius;
    const double PI = 3.141596;
    
    std::cout << "Enter radius : ";
    std::cin >> radius;


    float area = PI * (radius * radius);
    float cir = 2 * PI * radius;

    std::cout << std::setprecision(4) << std::fixed;
    std::cout << "Area " << area << std::endl;
    std::cout << "Cir " << cir << std::endl;

    return EXIT_SUCCESS;
}