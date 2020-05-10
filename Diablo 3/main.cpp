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

using namespace std;

int main()
{
    Varvarin Kasko("Kasko", "Test", "Test", "Test", "Test", mele, vTenk);
    Armor prvaGlava(Glava, legendary, plava, 150,"Nema", "Nema", "Nema");
    Kasko.pisiTxtVarvarin("Varvarin.txt", Kasko);
    Kasko.citajTxtVarvarin("Varvarin.txt");
    cout<<Kasko<<endl;
    cout<<"Broj varvarina u igrici: "<<Kasko.getbrojVarvarina()<<'\n'<<endl;
    Oruzije PrviRange(range, legendary, 120, 3.5, "Prvi udarac zapali neprijatelja", "Svaki put kada ubije protivnika poveca se udarac po sekundi za 5%, traje 10 sekundi", "bonus 10 golda za kill", true, 15, 20);
    cout<<PrviRange<<endl;
    cout<<prvaGlava<<endl;
    /*Za funkcjonalnost sam mislio da napravim profil , taj profil da ima karakteraa kojem moze da prodaje, kupuje,  metode od kovacaa, mistikaa, zlataraa
    To bi se izvrsavala tako sto se otvori meni u kojem se brojevima navodi koju radnju kovac, mistic, zlatar izvrsava,
    Nakon toga kovac pravi novi deo armora ili novo oruzije dok mistik i zlatar menjaju sta se nalazi u njemu.To sve sadrzi profil koji ima pristup svom karakteru sa svim armorima i oruzijima.*/
    return 0;
};
