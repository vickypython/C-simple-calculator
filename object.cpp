#include <iostream>
class Human
{
public:
    std::string name;
    std::string occupation;
    int age;
    void eat()
    {
        std::cout << "Am eating\n";
    }
    void read()
    {
        std::cout << "This human is reading\n";
    }
    void work()
    {
        std::cout << "human work\n";
    }
};
int main()
{

    // obj has attributes and methods att for characteristic,methods are the actions
    Human human1;
    human1.name = "victor";
    human1.occupation = "engineer";
    human1.age = 24;
    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';
    human1.eat();
    human1.read();
    human1.work();
    return 0;
}
