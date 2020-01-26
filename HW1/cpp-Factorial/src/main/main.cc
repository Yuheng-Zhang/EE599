#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    //std::cout << "Factorial of -2 is " << solution.Factorial(-2) << std::endl;
    //std::cout << "Factorial of -2 is " << solution.FactorialRecursive(-2) << std::endl;

    //std::cout << "Factorial of 0 is " << solution.Factorial(0) << std::endl;
    //std::cout << "Factorial of 0 is " << solution.FactorialRecursive(0) << std::endl;

    std::cout << "Factorial of 2 is " << solution.Factorial(2) << std::endl;
    std::cout << "Factorial of 2 is " << solution.FactorialRecursive(2) << std::endl;

    //std::cout << "Factorial of 5 is " << solution.Factorial(5) << std::endl;
    //std::cout << "Factorial of 5 is " << solution.FactorialRecursive(5) << std::endl;

    return EXIT_SUCCESS;
}