#include <iostream>
struct student
{
    std::string name;
    double gpa;
    bool enrolled=true;
};
int main()
{
//a struct -structure that group related variable under one name
//structure can contain many diffirent data types(strings,number,boolen)
//variable in a structure are called "memembers"
//memembers can be accessed using class memember access operator
    student student1;
    student1.name = "victor";
    student1.gpa = 4.5;
   
    student student3;
    student3.name = "torvic";
    student3.gpa = 4.0;
 
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    return 0;
}