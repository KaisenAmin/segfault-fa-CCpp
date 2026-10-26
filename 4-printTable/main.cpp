#include <iostream>
#include <print>
#include <cstdlib>
#include <iomanip>


int main() {
    std::printf("%-10s %5s %10s\n", "Item", "Qty", "Price");
    std::printf("%-10s %5d %10.2f\n", "Pen", 5, 3.14f);
    std::printf("%-10s %5d %10.2f\n", "Notebook", 8, 4.14f);
    std::printf("%-10s %5d %10.2f\n", "GPU", 3, 5.61561f);
    std::printf("-------------\n");


    std::cout << "Item" << std::setw(12) << "Qty" << std::setw(12) << "Price" << std::endl;
    std::cout << "Pen" << std::setw(13) << 5 << std::setw(12) << 3.14f << std::endl;
    std::cout << "Notebook" << std::setw(8) << 8 << std::setprecision(5) << std::fixed << std::setw(15) << 4.14f << std::endl;
    std::cout << "GPU" << std::setw(13) << 3 << std::setprecision(5) << std::fixed << std::setw(15) << 5.1432f << std::endl;

    return EXIT_SUCCESS;
}