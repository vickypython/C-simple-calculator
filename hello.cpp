#include <iostream>
#include <cmath>
#include <math.h>
int main()
{
    char op;
    double num1;
    double num2;
    double result;
    std::cout << "******calculator*****" << '\n';
    std::cout << "Enter either ( + - * /)";
    std::cin >> op;
    std::cout << "Enter num1:";
    std::cin >> num1;
    std::cout << "Enter num2:" ;
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "result:" << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "result:" << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "result:" << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "result:" << result << '\n';
        break;
    default:
        std::cout << "Not what i expected ";
        break;
    }
    std::cout << "**************";

    
  
    
    return 0;
}