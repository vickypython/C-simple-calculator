#include <iostream>
void sortBubble(int array[], int size);
int main()
{

  int array[] = {10, 9, 6, 3, 1, 7, 5, 8, 4, 2};
  int size = sizeof(array) / sizeof(array[0]);
  sortBubble(array, size);
  for (int element : array)
  {
    std::cout <<"Here are the Elements:" << element;
  }
  return 0;
}
void sortBubble(int array[], int size)
{
  int temp;
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; i < size - i - 1; j++)
    {
     if(array[j]>array[j + 1]){
      temp=array[j];
      array[j]=array[j+1];
      array[j+1]=temp;
     }
    }
  }
}
