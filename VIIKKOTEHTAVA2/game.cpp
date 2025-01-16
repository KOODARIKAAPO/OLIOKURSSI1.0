#include "game.h"


Game::Game(int num)
{
    maxNumber = num;
    numOfGuesses = 0;
    cout<< "constructor kutsuttu"<<endl;
};

Game::~Game()
{
cout<< "Destructor kutsuttu"<<endl;
}
void Game::play(){


    srand(time(NULL));

int randomNumber = (rand() % 20) + 1;

    while (playerGuess != randomNumber){

        if (numOfGuesses==maxNumber){
            cout<< "peli Paattyi"<<endl;
                break;
        }
        cout<< "Arvaa Luku."<<endl;
         cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess > randomNumber){
            cout<<"Arvaus on liian suuri.";
        }
        if (playerGuess < randomNumber){
            cout<<"Arvaus on liian pieni";
        }
         if (playerGuess == randomNumber){
            printGameresult();
    }

}
}


void Game::printGameresult()
{
    cout<<"arvausten maara:"<<numOfGuesses<<endl;
    cout<<"Voitit pelin!!"<<endl;

}
