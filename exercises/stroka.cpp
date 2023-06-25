class Stroka {
public:
    // Default constructor
    Stroka() {
        str = new char[91];
        str[0] = '\0'; // Initializing the string as empty
    }

    // Constructor with a C-style string
    Stroka(const char* input) {
        str = new char[91];
        int i;
        // Copy characters from the input string until we hit a null-terminator
        // or reach the maximum size of our string (90 characters)
        for (i = 0; i < 90 && input[i] != '\0'; ++i) {
            str[i] = input[i];
        }
        // Ensure our string is null-terminated
        str[i] = '\0';
    }

    // Constructor with string size
    Stroka(int size) {
        str = new char[91];
        // Initialize string with spaces
        for(int i = 0; i < size; ++i) {
            str[i] = ' ';
        }
        // Ensure our string is null-terminated
        str[size] = '\0';
    }

    // Destructor
    ~Stroka() {
        delete[] str; // Deallocate the memory that was previously allocated
    }

private:
    char* str;
};

int main() {
    Stroka a = Stroka(); // Using the default constructor
    char *z = "examene"; Stroka b = Stroka(z); // Using the constructor with a C-style string
    Stroka c(10); // Using the constructor with a size

    // ...

    return 0;
}
