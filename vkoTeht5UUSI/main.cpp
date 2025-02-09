#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    int luku;
    Seuraaja olio1(" Engel ");
    olio1.paivitys(" jippii toimii! ");
    olio1.getNimi();


    Notifikaattori n;

    Seuraaja* s1=new Seuraaja (" Engel ");
    Seuraaja* s2=new Seuraaja (" Marx ");
    Seuraaja* s3=new Seuraaja (" Kuusinen ");

    n.lisaa(s1);
    n.lisaa(s2);
    n.lisaa(s3);

    cout<<" Seuraajat: " << endl;
    n.tulosta();

    cout << "\nLähetetään vieti seuraajille: " <<endl;
    n.postita(" Olette aatteen miehia!");

    cout << "\npoistetaan Kuusinen " <<endl;
    n.poista(s3);

    cout << "\nSeuraajat poiston jälkeen:" << endl;
    n.tulosta();

    n.postita(" Olette aatteen miehet ");


    return 0;
}
