#include <iostream>
class Animal
{
public:
    bool alive = true;
    void eat()
    {
        std::cout << "This animal are fraxing\n";
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        std::cout << "The dog goes barking\n";
    }
};
class Cat : Animal
{
public:
    void meow()
    {
        std::cout << "the cats goes meow meow\n";
    };
};
int main()
{
    Dog dog;
    Cat cat;
    cat.meow();
    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();
    return 0;
}
