#include <iostream>
#include <string>
#include "chef.h"
#include "italianChef.h"

using namespace std;

int main()
{
    Chef olio("Gordoni");

    italianChef olio2("Marco");


    cout<< " Gordoni valmisti " << olio.makeSalad(30) << "  annosta salaattia ja " << endl;
    cout<< olio.makeSoup(10)<< " annosta keittoa " << endl;



    cout<< olio2.askSecret("pizza",200,200) << " salasana pyydetty. " << endl;




    return 0;

}
