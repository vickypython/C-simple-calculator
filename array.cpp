#include<iostream>
int getTotal(int array[],int size,int element);
int main(){

int prices[]={23,56,7,50,40};
int size=sizeof(prices)/sizeof(prices[0]);
int index;
int myNum;
std::cout<<"Enter new element";
std::cin>> myNum;
index=getTotal(prices,size,myNum);
if(index !=-1){
    std::cout<< myNum <<" IS AT INDEX " << index;
}else{
    std::cout<<myNum <<" is not in the array";
}
    return 0;
}
int getTotal(int prices[],int size,int element){
  
  for(int i=0;i<size;i++){
    if(prices[i]==element){
        return i;
    }
  }
return -1;
}