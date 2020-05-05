#ifndef KOVAC_HPP_INCLUDED
#define KOVAC_HPP_INCLUDED
#include "armor.hpp"
#include "Oruzije.hpp"

enum posaoKovaca{forge , salvage, buy, sell};

class Kovac: public Oruzije, public Armor{
private:
    string ime;
    string nadimak;
    Armor a;
    Oruzije b;
    int posaoKovaca;
    int cena;
    int i;
public:
 /*       Kovac (string i, string n, int c){
        ime=i;
        nadimak=n;
        cena=c;
        }
        Kovac Posao(){
        do{
        cout<<"Meni"<<endl;
        cout<<"1. forge-pravljenje novog oruzija"<<endl;
        cout<<"2. salvage-daj svoj deo opreme, oruzije ili armor, da bi dobio materijal za nova oruzija"<<endl;
        cout<<"3. Kupi svoje oruzije/armor"<<endl;
        cout<<"4. Prodaj oruzije/ armor"endl;
        cout<<"5. izaberi 0 ako zelis da izadjes"<<endl;
        cin>>i>>endl;
            if(i=1){
                    Oruzije(Oruzija tipOruzija, Reriti z, int d, float u, string p, string s, string b, bool g, string gemm){
                    tip=tipOruzija;
                    tipzastupljenosti=z;
                    damage=d;
                    udarciposekundi=u;
                    prim=p;
                    sec=s;
                    boostt=b;
                    gem=g;
                    //gem citam iz fajla;
                    if(g==true){
                        tipgema=gemm;
                        }
                    else{
                            gemm="nema gema";
                    }
                    }
            }
            else if (i=2){

            }
        }while (i!=0)
        }*/
};


#endif // KOVAC_HPP_INCLUDED
