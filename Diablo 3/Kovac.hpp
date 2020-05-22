#ifndef KOVAC_HPP_INCLUDED
#define KOVAC_HPP_INCLUDED
#include "armor.hpp"
#include "Oruzije.hpp"


class Kovac{
private:
    string ime;
    string nadimak;
    int cena;
    int i;
    int uspesnost;
public:
    Kovac (string i, string n, int c, int u){
        ime=i;
        nadimak=n;
        cena=c;
        uspesnost=u;
    }
    void ispisKovac(){
        cout<<"Ime: "<<ime<<endl;
        cout<<"Nadimak: "<<nadimak<<endl;
        cout<<"Cena: "<<cena<<endl;
        cout<<"Uspesnost: "<<uspesnost<<endl;
    }
    int getUspesnost()const{
        return uspesnost;
    }
    string getNaziv()const{
        return ime;
    }
    int getCena()const{
            return cena;
    }
};


#endif // KOVAC_HPP_INCLUDED
