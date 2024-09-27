#include <iostream>
class Student
{
public:
    std::string name;
    int age;
    double gpa;
    Student(std::string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};
int main()
{
    Student student1("victor", 24, 3.5);
    Student student3("luckr", 26, 1.5);
    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';
    return 0;
}
