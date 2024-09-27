#include <iostream>
enum Days
{
    sunday=0,
    monday = 1,
    tuesday = 2
};
int main()
{

    Days today = sunday;
    switch (today)
    {
    case sunday:
        std::cout << "Its sunday\n";
        break;
    case monday:
        std::cout << "its monday\n";
        break;
    case tuesday:
        std::cout << "its tuesday\n";
        break;
    }
    return 0;
}
