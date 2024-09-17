#include <iostream>
int main()
{
  
    char *pGrade = NULL;
    int size;
    std::cout << "How many grades to enter in ? :";
    std::cin >> size;

    pGrade = new char[size];//memory heap instead of the stack
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade#" << i + 1 << ": ";
        std::cin >> pGrade[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << pGrade[i] << " ";
    }
    delete[] pGrade;
    return 0;
}