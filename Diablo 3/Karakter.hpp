#ifndef KARAKTER_HPP_INCLUDED
#define KARAKTER_HPP_INCLUDED

#define  maxlvl = 80

using namespace std;

enum tipnapada{mele, rejng, magic};

class Karakter {
protected:
    string ime;
    string opis;
    string skilovi;
    string pasivna;
    string pol;
    tipnapada daljina;
    unsigned lvl;

public:

    Karakter (string i, string op, string skill, string passive, string p, tipnapada tip, unsigned l){
        ime=i;
        opis=op;
        skilovi=skill;
        pasivna=passive;
        pol=p;
        daljina=tip;
        lvl=l;
    }
    virtual void IspisiKarakter(){
        cout<<"Moje ime je "<<ime<<". "<<endl;
        cout<<"Imam "<<skilovi<<" ove skilove, "<<pasivna<<" a ovo su mi pasivne "<<endl;
        cout<<"Moj pol je "<<pol<<". Moju udarci su tipa "<<daljina<<" i ja sam "<<lvl<<" levl."<<endl;
        cout<<endl;
    }
    string getIme()const {
        return ime;
    }
};

#endif // KARAKTER_HPP_INCLUDED
