#ifndef VEKTOR_HPP_INCLUDED
#define VEKTOR_HPP_INCLUDED
#include <vector>
// definisi == operator ma da ne znas kako
using namespace std;
class Akaunt{
private:
    string Ime;
    string Prezime;
    int novac;
    vector <Karakter*> karakteri;
public:
    Akaunt (string i, string p, int n){
    Ime=i;
    Prezime=i;
    novac=n;
    }
    void DodajKarakter(Karakter* k){
        karakteri.push_back(k);
    }
    void ispisiKaraktere(){
        for (auto it=karakteri.begin(); it<karakteri.end(); it++){
            (*it)->IspisiKarakter();
    }
    }
    bool izbaci(string ine){
        for (auto it=karakteri.begin(); it<karakteri.end(); it++){
            if (ine == (*it)->getIme()){
                    karakteri.erase(it);
                return true;
            }
        }
        return false;
    }
    bool pretraga(string ine){
        for (auto it=karakteri.begin(); it<karakteri.end(); it++){
            if (ine==(*it)->getIme()){
                return true;
            }
        }
        return false;
    }


};

#endif // VEKTOR_HPP_INCLUDED
