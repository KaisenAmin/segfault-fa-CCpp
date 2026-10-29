#include <iostream>
#include <cstdlib>


int main() {
    int seconds;
    int h, m, s;
    const int HOUR = 3600;
    const int MINUTES = 60;


    std::cout << "Enter seconds : ";
    std::cin >> seconds;

    h = seconds / HOUR;
    m = (seconds % HOUR) / MINUTES;
    s = (seconds % HOUR) % MINUTES;

    std::printf("%d:%02d:%02d\n", h, m, s);

    return EXIT_SUCCESS;
}