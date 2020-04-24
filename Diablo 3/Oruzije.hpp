#ifndef ORUZIJE_HPP_INCLUDED
#define ORUZIJE_HPP_INCLUDED
enum Oruzija{twohand, ondhand, range};

enum zastupljenost{common, sett, rare, lagendary};

class Oruzije{
private:
    Oruzija tip;
    zastupljenost tipzastupljenosti;
    int damage;
    float udarciposekundi;
    string prim;
    string sec;
    string boostt;
    bool gem;
public:
    Oruzije(Oruzija tipOruzija, zastupljenost z, int d, float u, string p, string s, string b, bool g){
    tip=tipOruzija;
    tipzastupljenosti=z;
    damage=d;
    udarciposekundi=u;
    prim=p;
    sec=s;
    boostt=b;
    gem=g;
    }
};

#endif // ORUZIJE_HPP_INCLUDED
