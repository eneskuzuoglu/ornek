#include <iostream>
#include <cstring> // For C-style string functions
#include <string>
#include <cstdlib> // To use the system command

// Function to compare a C-style string with an std::string




int main() {
    
    
    int x = 10;
    int y = 5;
    int z = 2;
    

    
    // Operator precedence examples
    int result1 = x + y * z; // Multiplication has higher precedence: 10 + (5 * 2) = 20
    int result2 = (x + y) * z; // Parentheses have higher precedence: (10 + 5) * 2 = 30
    int result3 = x - y / z; // Division has higher precedence: 10 - (5 / 2) = 8
    int result4 = (x - y) / z; // Parentheses have higher precedence: (10 - 5) / 2 = 2
    int result5 = x % z; // Modulus operation: 10 % 2 = 0

    // Displaying the results
    std::cout << "Result1: " << result1 << std::endl;
    std::cout << "Result2: " << result2 << std::endl;
    std::cout << "Result3: " << result3 << std::endl;
    std::cout << "Result4: " << result4 << std::endl;
    std::cout << "Result5: " << result5 << std::endl;

    // Difference between integer division and float division
    int integerDivisionResult = 5 / 2; // Integer division, result is 2
    float floatDivisionResult = 5.0 / 2; // Float division, result is 2.5

    // Displaying the results
    std::cout << "Integer Division Result: " << integerDivisionResult << std::endl;
    std::cout << "Float Division Result: " << floatDivisionResult << std::endl;



    // Equality comparison
    bool isEqual = (x == y); // x and y are not equal, result is false
    bool isNotEqual = (x != y); // x and y are not equal, result is true
    
    
    // Displaying the equality results
    std::cout << "Are x and y equal: " << isEqual << std::endl;
    std::cout << "Are x and y not equal: " << isNotEqual << std::endl;

    bool divisionResult = (integerDivisionResult == floatDivisionResult);


    char character = 'e';

    // Usage of std::string and its operations
    std::string text = "Hello, ";

    // Appending one string to another (append)
    std::string appendedText = "World!";
    text.append(appendedText);

    // Displaying the resulting string
    std::cout << "Result: " << text << std::endl;


        // Using const with std::string
        const std::string constantStr = "This is a constant string.";
        // constantStr += " This cannot be modified."; // Uncommenting this line will result in a compilation error.

        std::cout << "Constant String: " << constantStr << std::endl;
        
        
        return 0;
    }



