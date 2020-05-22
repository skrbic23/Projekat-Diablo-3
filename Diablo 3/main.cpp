#include <iostream>
#include "armor.hpp"
#include "Carobnjak.hpp"
#include "dangun.hpp"
#include "Karakter.hpp"
#include "Kovac.hpp"
#include "Krstas.hpp"
#include "Lovacnademone.hpp"
#include "Misitik.hpp"
#include "Monah.hpp"
#include "Oruzije.hpp"
#include "Prizivacduhova.hpp"
#include "Varvarin.hpp"
#include "Zlatar.hpp"
#include "Vektor.hpp"
#include "Game.hpp"

void pisiTxt(string nazivFajla, string tekst, char mode='w'){
    ofstream fajl;
    if (mode=='a'){
        fajl.open (nazivFajla, ios_base::app);
    }else{
        fajl.open (nazivFajla);
    }
    fajl << tekst << endl;
    fajl.close();

}
void citajTxt(string nazivFajla){
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }
    else
        cout << "Neuspesno otvoren fajl";
}
deoArmora konvertujArmor(int const i){
    if(i==1)
        return Glava;
    else if(i==2)
        return Ramena;
    else if(i==3)
        return Torzo;
    else if(i==4)
        return Zglob;
    else if(i==5)
        return Ruke;
    else if(i==6)
        return Struk;
    else if(i==7)
        return Noge;
    else if(i==8)
        return Stopalo;
    else if(i==9)
        return Nakit;
}
Reriti konvertujReriti(int const i){
    if(i==1)
        return common;
    else if(i==2)
        return megic;
    else if(i==3)
        return sett;
    else if(i==4)
        return rare;
    else if(i==5)
        return legendary;
}
Color konvertujColor(int const i){
    if(i==1)
        return bela;
    else if(i==2)
        return plava;
    else if(i==3)
        return zelena;
    else if(i==4)
        return zuta;
    else if(i==5)
        return narandzasta;
}
Oruzija konvertujOruzije(int const i){
    if (i==1)
        return twohand;
    else if(i==2)
        return onehand;
    else if(i==3)
        return range;
}

tipnapada napadconvert(const int i){
    if(i==1)
        return mele;
    else if(i==2)
        return rejng;
    else if(i==3)
        return magic;
}
DungunVarvarin varvarinkonvert(const int i){
    if(i==1)
        return vTenk;
    else
        return vDps;
}
Wizard carobnjakkonvertuj(const int i){
    if(i==1)
        return wHiler;
    else
        return wDps;
}
Monk monahkonvertuj(const int i){
    if(i==1)
        return mHiler;
    else
        return mDps;
}
Duhovi duhKonvertuj(const int i){
    if(i==1)
        return dTenk;
    else
        return dDps;
}
int main()
{
    string opsti,kovac1, kovac2, kovac3, kovac4, kovac5, kovac6, kovac7, kovac8, mistik1, mistik2,zlatar1, zlatar2, karakter1, karakter2, karakter3, karakter4, karakter5, karakter6,sve5,sve6, sve7, strid;
    string nasfajl="Izlaznifajl.txt";
    opsti="Za vreme provede ste izvrsili sledece opcije:";
    pisiTxt(nasfajl, opsti, 'w');
    karakter1="Napravljen je novi karakter tipa varvarin.";
    karakter2="Napravljen je novi karakter tipa carobnjak.";
    karakter3="Napravljen je novi karakter tipa krstas.";
    karakter4="Napravljen je novi karakter tipa lovac na demone.";
    karakter5="Napravljen je novi karakter tipa monah.";
    karakter6="Napravljen je novi karakter tipa prizivac duhova.";
    kovac1="Napravljen je novi deo armora.";
    kovac2="Napravljeno je novo  oruzije.";
    kovac3="Unisten je deo armora.";
    kovac4="Unisteno je oruzije.";
    kovac5="Prodano je svoj deo armora.";
    kovac6="Prodano je svoje orzije.";
    kovac7="Kupljeno je novi deo armora.";
    kovac8="Kupljeno je novo oruzije.";
    mistik1="Encantovano je neki deo armora ili neko oruzije.";
    mistik2="Promenjena je boja nekog dela armora.";
    zlatar1="Kombajnovano je dva gema.";
    zlatar2="Dodato je gem na oruzije.";
    sve5="Ispisani su svi karakteri na akauntu.";
    sve6="Izbrisan je karakter sa akaunta.";
    sve7="Provereno je da li karakter postoji na akauntu.";
    int i,cenerada, novaci, zlatni;
    Game Diablo3("Diablo3");
    Varvarin Kasko("Kasko", "Test", "Test", "Test", "Test", mele, vTenk, 5);
    Armor prvaGlava(Glava, legendary, plava, 150,"Nema", "Nema", "Nema", 358962);
    Varvarin Brang("Brang", "Test2", "Test2", "Test2", "Test2", mele, vDps,10);
    Varvarin Bjorn("Bjorn", "Test3", "Test3", "Test3", "Test3", mele, vDps, 20);
    Kasko.pisiTxtVarvarin("Varvarin.txt", Kasko);
    Kasko.pisiTxtVarvarin("Varvarin.txt", Brang, 'a');
    Bjorn.pisiTxtVarvarin("Varvarin.txt", Bjorn, 'a');
    Kasko.citajTxtVarvarin("Varvarin.txt");
    cout<<Kasko<<endl;
    cout<<"Broj varvarina u igrici: "<<Kasko.getbrojVarvarina()<<'\n'<<endl;
    Oruzije PrviRange(range, legendary, 120, 3.5, "Prvi udarac zapali neprijatelja", "Svaki put kada ubije protivnika poveca se udarac po sekundi za 5%, traje 10 sekundi", "bonus 10 golda za kill", true, 785396, 15, 20, "Goodie");
    cout<<PrviRange<<endl;
    cout<<prvaGlava<<endl;
    cout<<endl;
    Akaunt AK("Vukasin", "Skrbic", 3000);
    AK.DodajKarakter(&Kasko);
    AK.DodajKarakter(&Brang);
    AK.DodajKarakter(&Bjorn);
    AK.ispisiKaraktere();
    Kovac Magsy("Magsy", "Mogy", 20, 2);
    Kovac Proks("Proks", "Pyje", 30, 5);
    Kovac Kobe("Kobe", "Mamba", 50, 9);
    Diablo3.dodajKovaca(Magsy);
    Diablo3.dodajKovaca(Proks);
    Diablo3.dodajKovaca(Kobe);
    AK.dodajArmor(prvaGlava);
    Armor drugaGlava(Glava, common, plava, 25 ,"Nema", "Nema", "Nema", 547283);
    AK.dodajArmor(drugaGlava);
    AK.dodajOruzije(PrviRange);
    Oruzije Prvitwohend(twohand, common, 25, 2.5, "Nema", "Nema", "Dobijate 2 golda za kill", false ,458698);
    AK.dodajOruzije(Prvitwohend);
    Oruzije oruzijegame1(twohand, common, 30, 2, "Nema", "Nema", "Nema", false, 100000);
    Diablo3.dodajOruzije(oruzijegame1);
    Armor armorgame1(Zglob, common, plava, 25, "Nema", "Nema", "Nema", 111000);
    Diablo3.dodajArmor(armorgame1);
    Gem g1("UDARI BRZE", 0, 3.0);
    Gem g2("UDARI JACE", 30, 0);
    Gem g3("UDARI", 15, 1.5);
    AK.dodajGem(g1);
    AK.dodajGem(g2);
    AK.dodajGem(g3);
    Mistic mik1("Marvy", "the lord skipper", 20);
    Mistic mik2("Berry", "the ugly one", 40);
    Mistic mik3("Chukie", "the red dragon", 60);
    Diablo3.dodajMistika(mik1);
    Diablo3.dodajMistika(mik2);
    Diablo3.dodajMistika(mik3);
    Zlatar z1("Gaby", "the steelhead", 20);
    Zlatar z2("Megy", "the fisherman", 40);
    Zlatar z3("Bony", "the sheephead", 60);
    Diablo3.dodajZlatara(z1);
    Diablo3.dodajZlatara(z2);
    Diablo3.dodajZlatara(z3);
    do{
        cout<<"Unesi 1 ako zelis da napravis novog Karaktera, i dodas ga na svoj akaunt"<<endl;
        cout<<"Unesi 2 ako zelis da saradjujes sa Kovacem"<<endl;
        cout<<"Unesi 3 ako zelis da saradjujes sa Mistikom"<<endl;
        cout<<"Unesi 4 ako zelis da saradjujes sa Zlatarom"<<endl;
        cout<<"Unesi 5 ako zelis da ispises sve karaktere na datom akauntu"<<endl;
        cout<<"Unesi 6 ako zelis da izbrises karaktera sa datog akaunta"<<endl;
        cout<<"Unesi 7 ako zelis da proveris da li je karakter na akauntu"<<endl;
        cout<<"Unesi 0 ako zelis da izadjes"<<endl;
        cin>>i;
        if(i==0){
            break;
        }
        if(i==1){
            int k, zadungun, napad, levl;
            levl=1;
            string imee, skil, pas, pol, opa;
            cout<<"Unesi ime, jedna rec"<<endl;
            cin>>imee;
            fflush(stdin);
            cout<<"Unesi opis svom karakteru"<<endl;
            getline(cin, opa);
            cout<<"Unesi skilove"<<endl;
            getline(cin,skil);
            cout<<"Unesi pasivnu"<<endl;
            getline(cin,pas);
            cout<<"Unesi pol"<<endl;
            getline(cin,pol);
            cout<<"Unesi 1 ako zelis da napravis varvarina"<<endl;
            cout<<"Unesi 2 ako zelis da napravis carobnjaka"<<endl;
            cout<<"Unesi 3 ako zelis da napravis krstasa"<<endl;
            cout<<"Unesi 4 ako zelis da napravis lovca na demone"<<endl;
            cout<<"Unesi 5 ako zelis da napravis monaha"<<endl;
            cout<<"Unesi 6 ako zelis da napravis prizivac duhova"<<endl;
            cout<<"Unesi 0 ako zelis da izadjes"<<endl;
            cin>>k;
            if(k==1){
                zadungun=1;
                cout<<"Unesi 1 ako zelis da varvarin bude tenk"<<endl;
                cout<<"Unesi 2 ako zelis da varvarin bude dps"<<endl;
                cin>>zadungun;
                cout<<"Varvarin samo moze biti mele"<<endl;
                napad=1;
                cout<<"Unesi levl, max 80, ako ne unesete bice 1"<<endl;
                cin>>levl;
                Varvarin  Vaki(imee, opa, skil, pas, pol,napadconvert(napad),varvarinkonvert(zadungun), 0);
                AK.DodajKarakter(&Vaki);
                pisiTxt(nasfajl, karakter1, 'a');
            }
            if(k==2){
                zadungun=1;
                napad=3;
                cout<<"Unesi 1 ako zelis da carobnjak bude hiler"<<endl;
                cout<<"Unesi 2 ako zelis da carobnjak bude dps"<<endl;
                cin>>zadungun;
                cout<<"Unesi 2 ako zelis da carobnjak bude rejng"<<endl;
                cout<<"Unesi 3 ako zelis da carobnjak bude magic"<<endl;
                cin>>napad;
                cout<<"Unesi levl, max 80, ako ne unesete bice 1"<<endl;
                cin>>levl;
                Carobnjak  Maki(imee, opa, skil, pas, pol,napadconvert(napad),carobnjakkonvertuj(zadungun), levl);
                AK.DodajKarakter(&Maki);
                pisiTxt(nasfajl, karakter2, 'a');
            }
            if(k==3){
                cout<<"Krstas moze biti samo mele i tenk"<<endl;
                cout<<"Unesi levl, max 80, ako ne unesete bice 1"<<endl;
                cin>>levl;
                napad=1;
                zadungun=1;
                Krstas Krki(imee, opa, skil, pas, pol, mele, kTenk, levl);
                AK.DodajKarakter (&Krki);
                pisiTxt(nasfajl, karakter3, 'a');
            }
            if(k==4){
                cout<<"Lovac na demone moze da bude samo rejng dps"<<endl;
                cout<<"Unesi levl, max 80, ako ne unesete bice 1"<<endl;
                cin>>levl;
                napad=1;
                zadungun=1;
                Lovacnademone Loki(imee, opa, skil, pas, pol, rejng, lDps, levl);
                AK.DodajKarakter(&Loki);
                pisiTxt(nasfajl, karakter4, 'a');
            }
            if(k==5){
                cout<<"Monah moze da ima tip napada magic"<<endl;
                napad=3;
                cout<<"Unesi 1 ako zelis da mohad bude hiler"<<endl;
                cout<<"Unesi 2 ako zelis da monah bude dps"<<endl;
                cin>>zadungun;
                zadungun=zadungun-1;
                cout<<"Unesi levl, max 80, ako ne unesete bice 1"<<endl;
                cin>>levl;
                Monah Moki(imee, opa, skil, pas, pol, magic, monahkonvertuj(zadungun), levl);
                AK.DodajKarakter(&Moki);
                pisiTxt(nasfajl, karakter5, 'a');
            }
            if(k==6){
                cout<<"Unesi 2 ako zelis da budes tip rejng"<<endl;
                cout<<"Unesi 3 ako zelis da budes tip magic"<<endl;
                cin>>napad;
                cout<<"Unesi 1 ako zelis da budes tenk"<<endl;
                cout<<"Unesi 2 ako zelis da budes dps"<<endl;
                cin>>zadungun;
                zadungun=zadungun-1;
                PrizivacDuhova Duki(imee, opa, skil, pas, pol, napadconvert(napad), duhKonvertuj(zadungun), levl);
                AK.DodajKarakter(&Duki);
                pisiTxt(nasfajl, karakter6, 'a');
            }
            if(k==0){
                continue;
            }
        }
        if(i==2){
            Diablo3.ispisiKovace();
            string kovi;
            cin>>kovi;
            cenerada=Diablo3.getKovac(kovi).getCena();
            int ko;
            cout<<"Unesi 1 ako zelis da napravis novi deo armora"<<endl;
            cout<<"Unesi 2 ako zelis da napravis novo oruzije"<<endl;
            cout<<"Unesi 3 ako zelis da unisitis neki deo armora"<<endl;
            cout<<"Unesi 4 ako zelis da unistis neko oruzije"<<endl;
            cout<<"Unesi 5 ako zelis da prodas svod deo armora, dobijas novac u kolicini armora"<<endl;
            cout<<"Unesi 6 ako zelis da prodas svoje oruzije, dobijas novca u kolicini dmg"<<endl;
            cout<<"Unesi 7 ako zelis da kupis novi deo armora , gubis novac u kolicini armora"<<endl;
            cout<<"Unesi 8 ako zelis da kupis novo oruzije, gubis novac u kolicini dmg"<<endl;
            cin>>ko;
            string prim,sec,bonus, imegema;
            int id,armor, demage, reriti, zaarmor, zaoruzije, boja;
            float dmgnagemu, atsnagemu, ups;
            if(ko==1){
                cout<<"Unesi 1 ako zelis da napravis glavu"<<endl;
                cout<<"Unesi 2 ako zelis da napravis ramena"<<endl;
                cout<<"Unesi 3 ako zelis da napravis torzo"<<endl;
                cout<<"Unesi 4 ako zelis da napravis zglob"<<endl;
                cout<<"Unesi 5 ako zelis da napravis ruke"<<endl;
                cout<<"Unesi 6 ako zelis da napravis struk"<<endl;
                cout<<"Unesi 7 ako zelis da napravis noge"<<endl;
                cout<<"Unesi 8 ako zelis da napravis stopalo"<<endl;
                cout<<"Unesi 9 ako zelis da napravis nakit"<<endl;
                cin>>zaarmor;
                fflush(stdin);
                cout<<"Unesi 1 ako zelis da reriti bude common"<<endl;
                cout<<"Unesi 2 ako zelis da reriti bude megic"<<endl;
                cout<<"Unesi 3 ako zelis da reriti bude set"<<endl;
                cout<<"Unesi 4 ako zelis da reriti bude rare"<<endl;
                cout<<"Unesi 5 ako zelis da reriti bude legendary"<<endl;
                cin>>reriti;
                fflush(stdin);
                cout<<"Unesi 1 ako zelis da armor bude beo"<<endl;
                cout<<"Unesi 2 ako zelis da armor bude plav"<<endl;
                cout<<"Unesi 3 ako zelis da armor bude zelen"<<endl;
                cout<<"Unesi 4 ako zelis da armor bude zut"<<endl;
                cout<<"Unesi 5 ako zelis da armor bude narandzast"<<endl;
                cin>>boja;
                fflush(stdin);
                cout<<"Unesi kolicinu armora koju zelis da ima ovaj deo armora"<<endl;
                cin>>armor;
                fflush(stdin);
                cout<<"Unesi primarni boost ako ima"<<endl;
                getline(cin, prim);
                fflush(stdin);
                cout<<"Unesi sekundarni boost ako ima"<<endl;
                getline(cin, sec);
                fflush(stdin);
                cout<<"Unesi bonus ako ima"<<endl;
                getline(cin, bonus);
                fflush(stdin);
                cout<<"Unesi id, 6 cifara"<<endl;
                int id;
                Armor Amor(konvertujArmor(zaarmor), konvertujReriti(reriti), konvertujColor(boja), armor, prim, sec, bonus, id);
                AK.dodajArmor(Amor);
                novaci=AK.getNovac();
                novaci=novaci-cenerada;
                AK.setNovac(novaci);
                AK.ispisiAkaunt();
                pisiTxt(nasfajl, kovac1, 'a');
            }
            if(ko==2){
                cout<<"Unesi 1 ako zelis da napravis twohand oruzije"<<endl;
                cout<<"Unesi 2 ako zelis da napravis onehand oruzije"<<endl;
                cout<<"Unesi 3 ako zelis da napravis range oruzije"<<endl;
                cin>>zaoruzije;
                fflush(stdin);
                cout<<"Unesi 1 ako zelis da reriti bude common"<<endl;
                cout<<"Unesi 2 ako zelis da reriti bude megic"<<endl;
                cout<<"Unesi 3 ako zelis da reriti bude set"<<endl;
                cout<<"Unesi 4 ako zelis da reriti bude rare"<<endl;
                cout<<"Unesi 5 ako zelis da reriti bude legendary"<<endl;
                cin>>reriti;
                fflush(stdin);
                cout<<"Unesi kolicinu demage koje zilis ovaj deo oruzija da ima"<<endl;
                cin>>demage;
                cout<<"Unesi udarce po sekundi"<<endl;
                cin>>ups;
                fflush(stdin);
                cout<<"Unesi primarni boosr ako ima"<<endl;
                getline(cin, prim);
                fflush(stdin);
                cout<<"Unesi sekundarni boost ako ima"<<endl;
                getline(cin, sec);
                fflush(stdin);
                cout<<"Unesi bonus ako ima"<<endl;
                getline(cin, bonus);
                fflush(stdin);
                cout<<"Unesi id, 6 cifara"<<endl;
                cin>>id;
                fflush(stdin);
                cout<<"Unesite ime za gem, ako zelite da imate gem, jedna rec, ako ne zelite gem upisite Nema"<<endl;
                cin>>imegema;
                fflush(stdin);
                if(imegema=="Nema"){
                    Oruzije  Oki(konvertujOruzije(zaoruzije), konvertujReriti(reriti), demage, ups, prim, sec, bonus, false, id, 0,0,"Nema");
                    AK.dodajOruzije(Oki);
                }
                else{
                    cout<<"Bounus od gema za udarce po sekundi"<<endl;
                    cin>>atsnagemu;
                    fflush(stdin);
                    cout<<"Bonus od gema za demage"<<endl;
                    cin>>dmgnagemu;
                    fflush(stdin);
                    Oruzije  Oki(konvertujOruzije(zaoruzije), konvertujReriti(reriti), demage, ups, prim, sec, bonus, true, id, dmgnagemu, atsnagemu, imegema);
                    AK.dodajOruzije(Oki);
                }
                novaci=AK.getNovac();
                novaci=novaci-cenerada;
                AK.setNovac(novaci);
                AK.ispisiAkaunt();
                pisiTxt(nasfajl, kovac2, 'a');
                }
            if(ko==3){
                AK.ispisiArmor();
                cout<<"Unesi id armora kojeg zelite da unistite: "<<endl;
                cin>>id;
                AK.izbaciArmor(id);
                novaci=AK.getNovac();
                novaci=novaci-cenerada;
                AK.setNovac(novaci);
                AK.ispisiAkaunt();
                pisiTxt(nasfajl, kovac3, 'a');
            }
            if(ko==4){
                AK.ispisiOruzije();
                cout<<"Unesi id oruzija kojeg zelite da unistite: "<<endl;
                cin>>id;
                AK.izbaciOruzije(id);
                novaci=AK.getNovac();
                novaci=novaci-cenerada;
                AK.setNovac(novaci);
                AK.ispisiAkaunt();
                pisiTxt(nasfajl, kovac4, 'a');
            }
            if(ko==5){
                AK.ispisiAkaunt();
                AK.ispisiArmor();
                cout<<"Unesi id armora kojeg zelite da prodate: "<<endl;
                cin>>id;
                AK.prodajArmor(id);
                novaci=AK.getNovac();
                novaci=novaci-cenerada;
                AK.setNovac(novaci);
                AK.ispisiAkaunt();
                pisiTxt(nasfajl, kovac5, 'a');
            }
            if(ko==6){
                AK.ispisiAkaunt();
                AK.ispisiOruzije();
                cout<<"Unesi oruzije koje zelite da preodate: "<<endl;
                cin>>id;
                AK.prodajOruzije(id);
                novaci=AK.getNovac();
                novaci=novaci-cenerada;
                AK.setNovac(novaci);
                AK.ispisiAkaunt();
                pisiTxt(nasfajl, kovac6, 'a');
            }
            if(ko==7){
                cout<<"Ne znam kako ovo da uradim, nece da radi"<<endl;
                pisiTxt(nasfajl, kovac7, 'a');
            }
            if(ko==8){
                cout<<"Ne znam kako ovo da uradim, nece da radi"<<endl;
                pisiTxt(nasfajl, kovac8, 'a');
            }
        }
        if(i==3){
            string lok;
            Diablo3.ispisiMistike();
            cout<<"Unesite ime mistika kojeg zelite da posetite: "<<endl;
            cin>>lok;
            cenerada=Diablo3.getMistik(lok).getCena();
            int pok,ako, dem;
            cout<<"Unesi 1 ako zelis da encantujes, random dodavanje armora ili dmg: "<<endl;
            cout<<"Unesi 2 ako zelis da promenis boju delu armora: "<<endl;
            cin>>pok;
            if(pok==1){
                AK.ispisiArmor();
                cout<<"Unesite id armora kjem zelite da encantujete: "<<endl;
                cin>>ako;
                AK.ispisiOruzije();
                cout<<"Unesite id oruzija koje zelite da encantujete: "<<endl;
                cin>>dem;
                Diablo3.getMistik(lok).Encant(AK.getArmor(ako), AK.getOruzije(dem));
                AK.ispisAmorid(ako);
                novaci=AK.getNovac();
                novaci=novaci-cenerada;
                AK.setNovac(novaci);
                AK.ispisiAkaunt();
                pisiTxt(nasfajl, mistik1, 'a');
            }
            if(pok==2){
                int boka;
                AK.ispisiArmor();
                cout<<"Unesite id armora kjem zelite da encantujete: "<<endl;
                cin>>ako;
                cout<<"Unesi 1 ako zelis da armor bude beo"<<endl;
                cout<<"Unesi 2 ako zelis da armor bude plav"<<endl;
                cout<<"Unesi 3 ako zelis da armor bude zelen"<<endl;
                cout<<"Unesi 4 ako zelis da armor bude zut"<<endl;
                cout<<"Unesi 5 ako zelis da armor bude narandzast"<<endl;
                cin>>boka;
                Diablo3.getMistik(lok).Tranformisi(AK.getArmor(ako), konvertujColor(boka));
                AK.ispisAmorid(ako);
                novaci=AK.getNovac();
                novaci=novaci-cenerada;
                AK.setNovac(novaci);
                AK.ispisiAkaunt();
                pisiTxt(nasfajl, mistik2, 'a');
            }
        }
        if(i==4){
            string perry,gg1, gg2;
            int op;
            Diablo3.ispisiZlatare();
            cout<<"Unesite ime zlatara sa kojim zelite da saradjujete"<<endl;
            cin>>perry;
            fflush(stdin);
            cenerada=Diablo3.getZlatar(perry).getCena();
            cout<<"Unesi 1 ako zelis da kombajnujes gemove "<<endl;
            cout<<"Unesi 2 ako zelis da dodas gem na oruzije "<<endl;
            cin>>zlatni;
            fflush(stdin);
            if(zlatni==1){
                AK.ispisiGemove();
                cout<<"Unesi ime za prvi, a potom za drugi gem koje zelis da spojis:"<<endl;
                getline(cin, gg1);
                fflush(stdin);
                getline(cin, gg2);
                fflush(stdin);
                Diablo3.getZlatar(perry).KombajnujGem(AK.getGem(gg1), AK.getGem(gg2));
                AK.ispisiGemove();
                pisiTxt(nasfajl, zlatar1, 'a');
            }
            if(zlatni==2){
                AK.ispisiOruzije();
                cout<<"Unesi id objekta kojeg"<<endl;
                cin>>op;
                fflush(stdin);
                AK.ispisiGemove();
                cout<<"Unesi ime za gem koji zelite da dodate"<<endl;
                getline(cin, gg1);
                fflush(stdin);
                Diablo3.getZlatar(perry).DodajGem(AK.getOruzije(op), AK.getGem(gg1));
                pisiTxt(nasfajl, zlatar2, 'a');
            }
        }
        if(i==5){
            AK.ispisiKaraktere();
            pisiTxt(nasfajl, sve5, 'a');
        }
        if(i==6){
            string s;
            cout<<"Unesi Karaktera kojeg zelis da izbrises:";
            cin>>s;
            AK.izbaci(s);
            pisiTxt(nasfajl, sve6, 'a');
        }
        if(i==7){
            string p;
            cout<<"Unesi Karaktera za kojeg zelis da proveris da li je tu:";
            cin>>p;
            if (AK.pretraga(p)==true){
                cout<<"Karakter koji ste uneli postoji"<<endl;
            }
            else
                cout<<"Karakter koji ste uneli ne postoji"<<endl;
            pisiTxt(nasfajl, sve7, 'a');
        }
    }while(i!=0);
    citajTxt(nasfajl);
    /*Za funkcjonalnost sam mislio da napravim profil , taj profil da ima karakteraa kojem moze da prodaje, kupuje,  metode od kovacaa, mistikaa, zlataraa
    To bi se izvrsavala tako sto se otvori meni u kojem se brojevima navodi koju radnju kovac, mistic, zlatar izvrsava,
    Nakon toga kovac pravi novi deo armora ili novo oruzije dok mistik i zlatar menjaju sta se nalazi u njemu.To sve sadrzi profil koji ima pristup svom karakteru sa svim armorima i oruzijima.*/
    return 0;
};

