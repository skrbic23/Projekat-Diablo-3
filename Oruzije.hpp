#ifndef ORUZIJE_HPP_INCLUDED
#define ORUZIJE_HPP_INCLUDED

enum mogucnost{twohand, ondhand, range};

enum zastupljenost{common, sett, rare, lagendary};

class Oruzije{
private:
    zastupljenost tip;
    int damage;
    float udarciposekundi;
    string prim;
    string sec;
    string boostt;
    bool gem;
public:
};

#endif // ORUZIJE_HPP_INCLUDED
