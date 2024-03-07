#include <iostream>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5; // Change this number to calculate factorial for a different value

    // Calculate factorial of 'number'
    int result = factorial(number);

    // Print the result
    std::cout << "Factorial of " << number << " is: " << result << std::endl;

    return 0;
}
