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
        dodajemats=0;
        dodajemdmg=0;
    }
    Gem ( float dd, float da){
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
};


#endif // GEM_HPP_INCLUDED
