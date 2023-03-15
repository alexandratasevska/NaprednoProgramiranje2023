#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    enum BrojDen {ponedelnik, vtornik, sreda, cetvrtok, petok, celosen};

    BrojDen brden = celosen;
    
    switch(brden){
        case ponedelnik:
            cout<<"Raspored ponedelnik\n";
            cout<<"9:00-11:30 -- Arhitektura na kompjuteri\n";
            cout<<"11:35-14:10 -- Napredno programiranje\n";
            break;
        case vtornik:
            cout<<"Raspored vtornik\n";
            cout<<"11:35-14:10 -- Matematika 2\n";
            break;
        case sreda:
            cout<<"Raspored sreda\n";
            cout<<"9:00-11:30 -- Veb tehnologii\n";
            cout<<"11:35-14:10 -- Veb tehnologii - VEZHBI\n";
            break;
        case cetvrtok:
            cout<<"Raspored cetvrtok\n";
            cout<<"11:35-13:10 -- Matematika 2\n";
            break;
        case petok:
            cout<<"Raspored petok\n";
            cout<<"9:00-11:30 -- Izboren\n";
            break;
        case celosen:
            cout<<"Raspored ponedelnik\n";
            cout<<"9:00-11:30 -- Arhitektura na kompjuteri\n";
            cout<<"11:35-14:10 -- Napredno programiranje\n";
            cout<<"\nRaspored vtornik\n";
            cout<<"11:35-14:10 -- Matematika 2\n";
            cout<<"\nRaspored sreda\n";
            cout<<"9:00-11:30 -- Veb tehnologii\n";
            cout<<"11:35-14:10 -- Veb tehnologii - VEZHBI\n";
            cout<<"\nRaspored cetvrtok\n";
            cout<<"11:35-13:10 -- Matematika 2\n";
            cout<<"\nRaspored petok\n";
            cout<<"9:00-11:30 -- Izboren\n";
            break;
    }
    
}