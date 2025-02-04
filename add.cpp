/**
 * @file main.cpp
 * @brief A simple C++ program to add two numbers.
 *
 * This program takes two numbers as input from the user,
 * adds them, and displays the result.
 *
 * @author Your Name
 * @date 2025-02-02
 */

#include <iostream>

/**
 * @brief Adds two numbers.
 * @param a First number.
 * @param b Second number.
 * @return Sum of a and b.
 */
int addNumbers(int a, int b) {
    return a + b;
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
