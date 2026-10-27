#include <iostream>
#include <cstdlib>
#include <iomanip>


int main() {   
    int i;
    char ch;
    double d;


    std::scanf("%i %lf %c", &i, &d, &ch);
    std::printf("int : %i\n", i);
    std::printf("double : %.2lf\n", d);
    std::printf("char : %c\n", ch);


    std::cout << "-------------\n";

    std::cin >> i >> d >> ch;
    std::cout << "int : " << i << std::endl;
    std::cout << std::setprecision(2) << std::fixed << "double : " << d << std::endl;
    std::cout << "char : " << ch << std::endl;

    return EXIT_SUCCESS;
}