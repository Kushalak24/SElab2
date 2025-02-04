

#include <iostream>

/**
 * @brief Adds two numbers.
 * @param a First number.
 * @param b Second number.
 * @return Sum of a and b.
 */
int addNumbers(int n1, int n2) {
    return n1 * n2;
}

/**
 * @brief Main function - Entry point of the program.
 * @return 0 on successful execution.
 */
int main() {
    int num1, num2;

    // Taking input from the user
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculating sum
    int sum = addNumbers(num1, num2);

    // Displaying result
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
