#include "chef.h"
#include "italianChef.h"

Chef::Chef(string n) {


    chefName = n;




    cout << "constructori luotu" << chefName << endl;
}
    Chef::~Chef(){

        cout << "destructori kutsuttu" << endl;
    }

int Chef::makeSalad(int Salaattiainekset) {

    int salaattiannos= Salaattiainekset/5;

    return salaattiannos;
}

int Chef::makeSoup (int keittoainekset){

    int keittoannos= keittoainekset/3;


    return keittoannos;

}

italianChef::italianChef(string name) : Chef(name), password ("pizza"),flour(100),water(100){

}

italianChef::~italianChef(){

}

bool italianChef::askSecret(string pass, int f, int w){
    if (pass == password){
        return makepizza(f,w);
    }else {
        cout << "Väärä salasana!" << endl;
        return false;
    }
}

int italianChef::makepizza(int f, int w){
    int pizzaMaara = 0;
    while (f >= 5 && w >= 5){

            f -= 5;
            w -= 5;
            pizzaMaara++;
    }
    cout << chefName<< " tekee pizzoja niin kauuan kuin aineksia on! " << endl;
    flour = f;
    water = w;
    cout<< chefName << " teki " << pizzaMaara << " pizzaa. " << endl;
    return pizzaMaara ;
}

