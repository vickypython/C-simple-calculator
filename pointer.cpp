#include<iostream>
int main(){

int *pointer=nullptr;
int x=123;
pointer=&x;
if(pointer ==nullptr){
    std::cout<<"address not assign";
}else{
    std::cout<<"Address was assign\n";
    std::cout<<*pointer;
}


    return 0;

}