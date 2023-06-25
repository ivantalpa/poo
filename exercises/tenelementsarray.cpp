#include <iostream>

class TenElementsArray {
public:
    // Constructor
    TenElementsArray() {
        for (int i = 0; i < 10; ++i)
            arr[i] = 0;
    }

    // Constructor with an initializer list
    TenElementsArray(std::initializer_list<int> list) {
        std::copy(list.begin(), list.end(), arr);
    }

    // Overloading '+' operator as a member function
    TenElementsArray operator+(const TenElementsArray& other) {
        TenElementsArray result;
        for (int i = 0; i < 10; ++i)
            result.arr[i] = this->arr[i] + other.arr[i];
        return result;
    }

    // Making the '-' operator overloading function as a friend
    friend TenElementsArray operator-(const TenElementsArray& a, const TenElementsArray& b);

    // Function to print array
    void print() const {
        for (int i = 0; i < 10; ++i)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }

private:
    int arr[10];
};

// Overloading '-' operator as a friend function
TenElementsArray operator-(const TenElementsArray& a, const TenElementsArray& b) {
    TenElementsArray result;
    for (int i = 0; i < 10; ++i)
        result.arr[i] = a.arr[i] - b.arr[i];
    return result;
}

int main() {
    TenElementsArray a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    TenElementsArray b = {-2, 3, 0, 7, 1, 7, 2, -6, 7, -1};

    TenElementsArray sum = a + b;
    TenElementsArray diff = a - b;

    std::cout << "Sum: ";
    sum.print();
    std::cout << "Difference: ";
    diff.print();

    return 0;
}
