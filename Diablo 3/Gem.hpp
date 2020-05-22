#ifndef GEM_HPP_INCLUDED
#define GEM_HPP_INCLUDED
using namespace std;
class Gem{
protected:
    string naziv;
    float dodajemdmg;
    float dodajemats;
public:
    Gem(){
        naziv="GEM";
        dodajemats=0;
        dodajemdmg=0;
    }
    Gem (string g, float dd, float da){
        naziv=g;
        dodajemdmg=dd;
        dodajemats=da;
    }
    float getGemdmg()const{
        return dodajemdmg;
    }
    float getGemats()const{
        return dodajemats;
    }
    float setDmg(float d){
        dodajemdmg=d;
    }
    float setAts(float a){
        dodajemats=a;
    }
    void ispisiGem(){
        cout<<naziv<<endl;
        cout<<dodajemdmg<<endl;
        cout<<dodajemats<<endl;
    }
    string getNaziv(){
        return naziv;
    }
};


#endif // GEM_HPP_INCLUDED
