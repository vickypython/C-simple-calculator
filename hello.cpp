#include <iostream>
#include <cmath>
#include <math.h>
#include <ctime>
int main()
{

   
    int num;
     int quess;
    int tries;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    std::cout << "####Number Quess Game###\n";
    do
    {
        std::cout << "Enter number between 1-100";
        std::cin >> quess;
        tries++;
        if (quess > num)
        {
            std::cout << "Too high\n";
        }
        else if (quess < num)
        {
            std::cout << "Too low\n";
        }
        else
        {
            std::cout << "Correct tries:" << tries << '\n';
        }
    } while (quess != num);

    std::cout << "########\n";
    return 0;
}