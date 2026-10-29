#include <iostream>
#include <cstdlib>
#include <iomanip>


int main() {
    float c;
    const float KEL = 273.15;

    std::cout << "Enter celsius : ";
    std::cin >> c;

    float far = c * 9 / 5 + 32;
    float kel = c + KEL;

    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Faren : " << far << " F" << std::endl;
    std::cout << "Kelvin : " << kel << " K" << std::endl;


    return EXIT_SUCCESS;

}