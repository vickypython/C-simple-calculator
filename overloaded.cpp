#include<iostream>
class Students{
    public:
   std::string fname;
   std::string lname;
   Students(std::string fname){
this->fname=fname;

   };
Students (std::string fname,std::string lname){
    this->fname=fname;
    this->lname=lname;
   }

};

int main(){
Students student1("vict");
Students student2("vic","kyalo");
std::cout<< student1.fname <<'\n';
std::cout<<student2.fname <<'\n';
std::cout<<student2.lname <<'\n';
    return 0;
}