#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

int main() {
    float h, w;

    std::cout << "Enter height : ";
    std::cin >> h;

    std::cout << "Enter width : ";
    std::cin >> w;


    float area = h * w;
    float circ = 2 * (h + w);
    float diagonal = std::sqrt(h * h + w * w); // std::pow(h * h + w * w, 0.5)

    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Area is : " << area << std::endl;
    std::cout << "Circumference is : " << circ << std::endl;
    std::cout << "diagonal is : " << diagonal << std::endl;



    return EXIT_SUCCESS;
}