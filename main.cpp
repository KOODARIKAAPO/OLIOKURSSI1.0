#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int game(int);
int x;

int main()
{
    cout << "Valitse vaikeustaso"; //Arvausten maara.
    cin >> x;
    game(x);
}

int game(int maxnum)
{
    srand((unsigned) time(0));

    int random;
    int arvaus = -1;
    int arvaustenmaara = 0;

    random = (rand() % 20) + 1;
    while (arvaus != random){

        if (arvaustenmaara == maxnum){
            cout << "Peli paattyi" << endl;
            break;
        }



        cout << "Arvaa luku." << endl;
        cin >> arvaus;
        arvaustenmaara++;


        if(arvaus > random){
            cout << "Arvaus on liian suuri." << endl;
        }

        if(arvaus < random){
            cout << "Arvaus on liian pieni." << endl;
        }

        if(arvaus == random){
            cout << "Arvausten maara:" << arvaustenmaara << endl;
            cout << "Arvasit oikein." << endl;
        }
    }
}
