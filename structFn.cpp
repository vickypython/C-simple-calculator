#include <iostream>

struct Cars
{
    std::string model;
    int year;
    std::string color;
};
void printCars(Cars &car);
void paintDiffColor(Cars &car,std::string color);
int main()
{
    Cars car1;
    Cars car2;
    car1.model = "bmw";
    car1.year = 2015;
    car1.color = "black";
    car2.model =" benz";
    car2.year = 2015;
    car2.color = "white";
    paintDiffColor(car1,"yellow");
    printCars(car1);
    printCars(car2);
    return 0;
}
void printCars(Cars &car)
{
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintDiffColor(Cars &car,std::string color){
car.color=color;
}