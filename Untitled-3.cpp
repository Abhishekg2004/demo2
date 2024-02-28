#include <iostream>

// Function to perform division
double divide(double x, double y) {
    // If the divisor is zero, throw an exception
    if (y == 0) {
        throw "Division by zero error";
    }
    // Otherwise, return the quotient
    return x / y;
}

int main() {
    // Declare and initialize two doubles
    double a = 10, b = 3;
    // Try to perform the division
    try {
        // Call the divide function and print the result
        std::cout << "Result: " << divide(a, b) << std::endl;
    }
    // Catch the exception
    catch (const char* e) {
        // Print the error message
        std::cout << "Error: " << e << std::endl;
    }
    return 0;
}
