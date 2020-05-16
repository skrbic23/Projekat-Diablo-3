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

int main()
{
    int i;
    Varvarin Kasko("Kasko", "Test", "Test", "Test", "Test", mele, vTenk, 5);
    Armor prvaGlava(Glava, legendary, plava, 150,"Nema", "Nema", "Nema");
    Varvarin Brang("Brang", "Test2", "Test2", "Test2", "Test2", mele, vDps,10);
    Varvarin Bjorn("Bjorn", "Test3", "Test3", "Test3", "Test3", mele, vDps, 20);
    Kasko.pisiTxtVarvarin("Varvarin.txt", Kasko);
    Kasko.pisiTxtVarvarin("Varvarin.txt", Brang, 'a');
    Bjorn.pisiTxtVarvarin("Varvarin.txt", Bjorn, 'a');
    Kasko.citajTxtVarvarin("Varvarin.txt");
    cout<<Kasko<<endl;
    cout<<"Broj varvarina u igrici: "<<Kasko.getbrojVarvarina()<<'\n'<<endl;
    Oruzije PrviRange(range, legendary, 120, 3.5, "Prvi udarac zapali neprijatelja", "Svaki put kada ubije protivnika poveca se udarac po sekundi za 5%, traje 10 sekundi", "bonus 10 golda za kill", true, 15, 20);
    cout<<PrviRange<<endl;
    cout<<prvaGlava<<endl;
    cout<<endl;
    Akaunt AK("Vukasin", "Skrbic", 300);
    AK.DodajKarakter(&Kasko);
    AK.DodajKarakter(&Brang);
    AK.DodajKarakter(&Bjorn);
    AK.ispisiKaraktere();
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
            cout<<"Ne znam kako da pretvorim string u enum"<<endl;
            /*int k;
            string ime, skil, pas,
            cout<<"Unesi ime novom karakteru"<<endl;
            cout<<"Unesi opis karaktera"<<endl;

            cout<<"Unesi 1 ako zelis da napravis varvarina"<<endl;
            cout<<"Unesi 2 ako zelis da napravis carobnjaka"<<endl;
            cout<<"Unesi 3 ako zelis da napravis krstasa"<<endl;
            cout<<"Unesi 4 ako zelis da napravis lovca na demone"<<endl;
            cout<<"Unesi 5 ako zelis da napravis monaha"<<endl;
            cout<<"Unesi 6 ako zelis da napravis prizivac duhova"<<endl;
            cout<<"Unesi 0 ako zelis da izadjes"<<endl;
            cin>>k;
            if*/
        }
        if(i==2){
            /*  1. Napravi novi Armor/ Oruzije
                2. Unisti neki deo armora
                3. Prodaj svoj deo i dodaj sebi novac u kolicini armora ili damaga
                4. Kupi novi deo i izgubi novac u kolicini armora ili damaga*/

        }
        if(i==3){
            /*1 1. Transformisi
                2. Encantuj*/
        }
        if(i==4){
            /* Kombajnuj gemove
            Dodaj gemove*/
        }
        if(i==5){
            AK.ispisiKaraktere();
        }
        if(i==6){
            string s;
            cout<<"Unesi Karaktera kojeg zelis da izbrises:";
            cin>>s;
            AK.izbaci(s);
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
        }
    }while(i!=0);
    /*Za funkcjonalnost sam mislio da napravim profil , taj profil da ima karakteraa kojem moze da prodaje, kupuje,  metode od kovacaa, mistikaa, zlataraa
    To bi se izvrsavala tako sto se otvori meni u kojem se brojevima navodi koju radnju kovac, mistic, zlatar izvrsava,
    Nakon toga kovac pravi novi deo armora ili novo oruzije dok mistik i zlatar menjaju sta se nalazi u njemu.To sve sadrzi profil koji ima pristup svom karakteru sa svim armorima i oruzijima.*/
    return 0;
};
