#include <iostream>
int main()
{
    std::string question[] = {
        "1.what year was c++ created?:",
        "2.who invented it?:",
        "3.who is predecesor of c++?",
        "4.Do your think Ai will replace human species?:"};
    std::string options[][4] = {
        {"A.1969", "B.1975", "C.1985", "D.1989"},
        {"A.Guido van", "B.jarne stroustrup", "C.elon musk", "D.steve jobs"},
        {"A.c", "B.c+", "C.c--", "D.++"},
        {"A.yes", "B.No", "C.equal", "D.Nan"}};
    char answerkey[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(question) / sizeof(question[0]);
    char guess;
    int score;
    for (int i = 0; i < size; i++)
    {
        std::cout << "##############\n";
        std::cout << question[i] << '\n';
        std::cout << "##############\n";
        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
            std::cout<<options[i][j] <<'\n';
        }
        std::cin >>guess;
        guess=toupper(guess);
        if(guess==answerkey[i]){
            std::cout<<"CORRET\n";
            score++;
        }else{
            std::cout<<"WRONG\n";
            std::cout<<"Answer: "<<answerkey[i] <<'\n';
        }
    }
     std::cout << "##############\n";
    std::cout<<"Results\n";
     std::cout << "##############\n";
     std::cout<<"Correct Guess: " <<score <<'\n';
     std::cout<<"# of question: "<< size <<'\n';
     std::cout<<"Score: "<<(score/(double)size)*100<<"%";

    return 0;
}