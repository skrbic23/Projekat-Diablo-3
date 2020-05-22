#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED
#include <vector>
using namespace std;

class Game{
private:
    vector<Kovac> kovaci;
    vector<Mistic> mistici;
    vector<Zlatar> zlatari;
    vector<Armor> gameArmor;
    vector<Oruzije> gameOruzije;
    string ime;
public:
    Game (string i="Diablo3"){
        ime=i;
    }
    void dodajKovaca(Kovac k){
        kovaci.push_back(k);
    }
    void dodajMistika(Mistic m){
        mistici.push_back(m);
    }
    void dodajZlatara(Zlatar z){
        zlatari.push_back(z);
    }
    void dodajArmor(Armor a){
        gameArmor.push_back(a);
    }
    void dodajOruzije(Oruzije o){
        gameOruzije.push_back(o);
    }
    void ispisiKovace(){
        for (auto it=kovaci.begin(); it<kovaci.end(); it++){
            it->ispisKovac();
        }
    }
    void ispisiMistike(){
        for (auto it=mistici.begin(); it<mistici.end(); it++){
            it->ispisMistik();
        }
    }
    void ispisiZlatare(){
        for (auto it=zlatari.begin(); it<zlatari.end(); it++){
            it->ispisZlatar();
        }
    }
    void ispisiArmor(){
        for (auto it=gameArmor.begin(); it<gameArmor.end(); it++){
            it->ispisideoArmora();
        }
    }
    void ispisiOruzije(){
        for (auto it=gameOruzije.begin(); it<gameOruzije.end(); it++){
            it->ispisideoOruzije();
        }
    }
    Kovac getKovac(string i){
        int p=0;
        for (auto it=kovaci.begin();it<kovaci.end(); it++){
            if(i==it->getNaziv())
            return kovaci[p];
            else
                p++;
        }
    }
    Armor getArmor(int i){
    int p;
        for (auto it=gameArmor.begin(); it<gameArmor.end(); it++){
            if(i==it->getarmorId())
                return gameArmor[p];
            else
                p++;
        }
    }
    Mistic getMistik(string i){
    int p=0;
        for (auto it=mistici.begin();it<mistici.end(); it++){
            if(i==it->getNaziv())
            return mistici[p];
            else
                p++;
        }
    }
    Zlatar getZlatar(string i){
        int p=0;
        for(auto it=zlatari.begin(); it<zlatari.end(); it++){
            if(i==it->getNaziv())
            return zlatari[p];
            else
                p++;
        }
    }
};

#endif // GAME_HPP_INCLUDED
