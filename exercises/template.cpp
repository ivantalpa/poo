#include <iostream>

// Template function for finding the maximum of three values
template<typename T>
T maxOfThree(T a, T b, T c) {
    T max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    // Using the function with int type
    int a = 10, b = 20, c = 15;
    std::cout << "Max of three integers: " << maxOfThree(a, b, c) << std::endl;

    // Using the function with double type
    double x = 1.2, y = 3.4, z = 2.2;
    std::cout << "Max of three doubles: " << maxOfThree(x, y, z) << std::endl;

    return 0;
}
