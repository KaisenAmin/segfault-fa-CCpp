#include <iostream>
#include <cstdlib>
#include <iomanip>

int main() {
    float a, b, c;
    constexpr int SIZE = 3;

    std::cout << "Enter a and b and c please : ";
    std::cin >> a >> b >> c;

    float average{(a + b + c) / SIZE};


    std::cout << "Average is " << std::setprecision(3) << std::fixed << average << std::endl;

    return EXIT_SUCCESS;

}