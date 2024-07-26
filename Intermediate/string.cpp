#include <iostream>
#include <string>

class String {
private:
    std::string value;

public:
    // Constructor to initialize the string value
    String(const std::string &val) : value(val) {}

    // Overloading the + operator to concatenate two String objects
    String operator+(const String &other) {
        return String(this->value + other.value);
    }

    // Function to get the string value
    std::string getValue() const {
        return value;
    }
};

int main() {
    // Create two String objects
    String s1("Hello, ");
    String s2("World!");

    // Concatenate using the + operator
    String s3 = s1 + s2;

    // Display the values of the three String objects
    std::cout << "s1: " << s1.getValue() << std::endl;
    std::cout << "s2: " << s2.getValue() << std::endl;
    std::cout << "s3: " << s3.getValue() << std::endl;

    return 0;
}