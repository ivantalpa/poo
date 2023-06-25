#include <iostream>

// Base class "Foundation"
class Foundation {
public:
    Foundation() {
        std::cout << "Building a foundation." << std::endl;
    }
};

// Derived class "House"
class House : public Foundation {
public:
    House() : Foundation() {
        std::cout << "Building a house on the foundation." << std::endl;
    }
};

// Derived class "Single-Story House"
class SingleStoryHouse : public House {
public:
    SingleStoryHouse() : House() {
        std::cout << "Building a single-story house." << std::endl;
    }
};

// Derived class "Multi-Story House"
class MultiStoryHouse : public House {
public:
    MultiStoryHouse() : House() {
        std::cout << "Building a multi-story house." << std::endl;
    }
};

int main() {
    SingleStoryHouse singleStory;
    MultiStoryHouse multiStory;
    return 0;
}
