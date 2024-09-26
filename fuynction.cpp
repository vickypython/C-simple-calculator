#include<iostream>
template<typename Thing,typename U>
auto max(Thing x, U y){
    return(x>y)?x:y;
}
int main(){
//function overload
std::cout<<max(2.6,5.7)<<'\n';





    return 0;
}