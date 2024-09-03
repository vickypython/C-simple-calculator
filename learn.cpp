#include <iostream>
#include <ctime>
char getUserChoice();
char getComputerChoice();
char showChoice(char choice);
void chooseWinner(char player, char computer);
int main()
{
    char player;   // us the player
    char computer; // the computer
    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);
    chooseWinner(player, computer);
    return 0;
}
char getUserChoice()
{
    char player;
    std::cout << "Rock-paper-scissor\n";
    do
    {
        std::cout << "************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissor\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
};
char getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
    return 0;
};
char showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "paper\n";
        break;
    case 's':
        std::cout << "scissor\n";
        break;
    default:
        std::cout << "Please choose a valid choice";
        break;
    }
    return 0;
};
void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "Its a tie\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You lost\n";
        }
        else
        {
            std::cout << "You won\n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "You won\n";
        }
        else if (computer == 'p')
        {
            std::cout << "Its a tie\n";
        }
        else
        {
            std::cout << "You lost\n";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "You lost\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You won\n";
        }
        else
        {
            std::cout << "Its a tie\n";
        }
        break;
    default:
        break;
    }
};