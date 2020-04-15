#include <iostream>

using namespace std;

class Barbarian{
private:
    string opis;
    string skilovi;
    string pasivna;
    string pol;
    unsigned lvl;

public:
    Barbarian(string op, string skill, string pasiv, string mz, unsigned l){
        opis=op;
        skilovi=skill;
        pasiv=pasivna;
        mz=pol;
        lvl=l;
    };
    string getOpis{
        return opis;
    }
    string getSkilovi{
        return skilovi;
    }
    string getPasivna{

    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
