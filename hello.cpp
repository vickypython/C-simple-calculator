#include <iostream>
#include <cmath>
#include <math.h>
int main()
{
    

    double temp;
    char unit;
    std::cout << "******temp conversion*** \n";
    std::cout << "F =Fahre\n";
    std::cout << "C=Clesius\n";
    std::cout << "what do you wanna convert";
    std::cin >> unit;
    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter temp in celcius conversion";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temp is:" << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter temp in fahre conversion";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "Temp is:" << temp << "C\n";
    }
    else
    {
        std::cout << "input either F or C";
    }
    std::cout << "***************";
  
    
    return 0;
}