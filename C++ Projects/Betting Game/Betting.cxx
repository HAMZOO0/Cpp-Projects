// Simple Betting game
// Queen King Jack - Computer shuffles these  cards
// if he win , player takes 3*bet
// player has $100 initailly
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int cash = 100;

void play(int bet)
{
    string card[3] = {"Queen", "king", "jack"};
    int chooice{};
    cout << " Choice 1 , 2 , 3 for Queen" << endl;
    cin >> chooice;

    for (int i = 0; i < rand() % 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;

        string temp = card[x];
        card[x] = card[y];
        card[y] = temp;
    }

    if (card[chooice - 1] == "Queen")
    {
        cash += bet * 3;
        cout << " Yes You are Correct You Win \n Now your Cash is :: " << cash << endl;
    }
    else
    {
        cash -= bet;
        cout << "You Lose The Game Not Life \n Now your Cash is :: " << cash << endl;
    }
}

int main(int argc, char const *argv[])
{
    char feedback = {};
    cout << "*** Welcome to Virtual Betting ***" << endl;
p:
    cout << "--> If you want to play then Enter Y ::";
    std::cin >> feedback;

    while (feedback == 'y' || feedback == 'Y')
    {
        int bet{};
        cout << "You Have " << cash << " Virtual Money " << endl;
        cout << "Enter your Bet :: ";
        std::cin >> bet;
        if (cash < bet)
        {
            cout << "Less Cash !!";
            goto p;
        }
        else
            play(bet);
        goto p;
    }

    return 0;
}
