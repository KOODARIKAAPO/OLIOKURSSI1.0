#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;







//Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”

//Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.



int main(){

    srand((unsigned) time(0));
    int guess = -1;
    int guessC;
    int randNum = rand() % 21;

    while(randNum!=guess){

        cout<< "arvaa luku 1-20"<< endl;
        cin>> guess;
        guessC++;


        if (guess > randNum){
            cout << "luku on pienempi" << endl;
        }
        if(guess < randNum){
            cout<< "luku on suurempi" << endl;
        }
        else if (guess== randNum){
            cout<< "oikea vastaus"<< endl;
            cout<< "arvausten maara"<<guessC<<endl;
        }
    }
}
