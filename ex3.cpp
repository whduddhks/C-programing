#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class DiceGame {
    int diceFace;
    int userGuess;

    void RollDice()
    {
        diceFace = (int)(rand()*6) + 1;
    }
    int getUserinput(string prompt)
    {
        int r;
        cout << prompt;
        cin >> r;
        return r;
    }
    void checkUserGuess()
    {
        if(diceFace == userGuess)
            cout << "�¾ҽ��ϴ�.";
        else
            cout << "Ʋ�Ƚ��ϴ�.";
    }
public:
    void startPlaying()
    {
        userGuess = getUserinput("������ �Է��Ͻÿ�: ");
        RollDice();
        checkUserGuess();
    }
};
int main()
{
    DiceGame game;
    game.startPlaying();
}