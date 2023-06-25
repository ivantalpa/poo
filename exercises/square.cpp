#include <iostream>

class Square {
private:
    double side; // Side of the square

public:
    // Default constructor
    Square() : side(0.0) {}

    // Constructor with one parameter
    Square(double side) : side(side) {}

    // Method to calculate the area of the square
    double calculateArea() {
        return side * side;
    }
};

int main() {
    // Creating an object using the constructor with one parameter
    Square sq(5.0);
    // Calculating and outputting the area of the square
    std::cout << "Area of the square: " << sq.calculateArea() << std::endl;
    return 0;
}
