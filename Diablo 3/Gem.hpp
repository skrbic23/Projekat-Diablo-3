#ifndef GEM_HPP_INCLUDED
#define GEM_HPP_INCLUDED
using namespace std;
class Gem{
protected:
    float dodajemdmg;
    float dodajemats;
public:
    Gem (float dd, float da){
        dodajemdmg=dd;
        dodajemats=da;
    }
    float setDmg(float d){
        dodajemdmg=d;
    }
    float setAts(float a){
        dodajemats=a;
    }
};


#endif // GEM_HPP_INCLUDED
