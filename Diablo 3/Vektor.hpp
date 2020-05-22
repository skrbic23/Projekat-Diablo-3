#ifndef VEKTOR_HPP_INCLUDED
#define VEKTOR_HPP_INCLUDED
#include <vector>

using namespace std;
class Akaunt{
private:
    string Ime;
    string Prezime;
    int novac;
    vector <Karakter*> karakteri;
    vector <Armor> deloviArmora;
    vector <Oruzije> deloviOruzija;
    vector <Gem> gemovi;
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
    void dodajArmor(Armor a){
        deloviArmora.push_back(a);
    }
    void ispisiArmor(){
        for (auto it=deloviArmora.begin(); it<deloviArmora.end(); it++){
            it->ispisideoArmora();
        }
    }
    bool izbaciArmor(int id){
        for (auto it=deloviArmora.begin(); it<deloviArmora.end(); it++){
            if(id==it->getarmorId()){
                deloviArmora.erase(it);
                return true;
            }
        }
        return false;
    }
    void dodajOruzije(Oruzije o){
        deloviOruzija.push_back(o);
    }
    void ispisiOruzije(){
        for (auto it=deloviOruzija.begin(); it<deloviOruzija.end(); it++){
            it->ispisideoOruzije();
        }
    }
    bool izbaciOruzije(int id){
        for (auto it=deloviOruzija.begin(); it<deloviOruzija.end(); it++){
            if(id==it->getoruzijeId()){
                deloviOruzija.erase(it);
                return true;
            }
        }
        return false;
    }
    int getNovac()const{
        return novac;
    }
    int setNovac(int i){
        novac=i;
    }
    void prodajArmor(int i){
        int p;
        for (auto it=deloviArmora.begin(); it<deloviArmora.end(); it++){
            if(i==it->getarmorId()){
                p=it->getArmor()+getNovac();
                setNovac(p);
                deloviArmora.erase(it);
            }
        }
    }
    void ispisiAkaunt(){
        cout<<Ime<<" "<<Prezime<<endl;
        cout<<"Novac: "<<novac<<endl;
    }
    void prodajOruzije(int i){
        int p;
        string pok;
        pok="izbrisano je orizije sa idom:";
        for (auto it=deloviOruzija.begin(); it<deloviOruzija.end(); it++){
            if(i==it->getoruzijeId()){
                p=it->getDamage()+getNovac();
                setNovac(p);
                deloviOruzija.erase(it);
            }
        }
    }
    Oruzije* getOruzije(int id){
    int p=0;
    for (auto it=deloviOruzija.begin(); it<deloviOruzija.end(); it++){
            if(id==it->getoruzijeId()){
                return &deloviOruzija[p];
            }

        }
    }
    Armor* getArmor(int id){
    int p=0;
    for (auto it=deloviArmora.begin(); it<deloviArmora.end(); it++){
            if(id==it->getarmorId()){
                return &deloviArmora[p];
            }

        }
    }
    void ispisAmorid(int id){
        for (auto it=deloviArmora.begin(); it<deloviArmora.end(); it++){
            if(id=it->getarmorId())
                it->ispisideoArmora();
        }
    }
    void ispisOruzijeid(int id){
        for (auto it=deloviOruzija.begin(); it<deloviOruzija.end(); it++){
            if(id=it->getoruzijeId())
                it->ispisideoOruzije();
        }
    }
    void ispisiGemove(){
        for (auto it=gemovi.begin(); it<gemovi.end(); it++){
            it->ispisiGem();
        }
    }
    Gem* getGem(string i){
        int p=0;
        for (auto it=gemovi.begin();it<gemovi.end(); it++){
            if(i==it->getNaziv())
            return &gemovi[p];
            else
                p++;
        }
    }
    void dodajGem(Gem g){
        gemovi.push_back(g);
    }
};

#endif // VEKTOR_HPP_INCLUDED
