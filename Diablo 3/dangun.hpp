#ifndef DANGUN_HPP_INCLUDED
#define DANGUN_HPP_INCLUDED
#include "Karakter.hpp"
#include "armor.hpp"

class Dangun{
private:
    string Miniboss;
    string Boss;
public:
    Dangun (){
        Miniboss="Clyde";
        Boss="Drexler";
    }
    Dangun(string m, string b){
        Miniboss=m;
        Boss=b;
    }
};


#endif // DANGUN_HPP_INCLUDED
