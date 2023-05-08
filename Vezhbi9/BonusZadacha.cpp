#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string proveriIzbor(int izbor) {
    string niza[4] = {
        " ",
        "List",
        "Kamen",
        "Nozhici"
    };
    return niza[izbor];
}

int main() {
    srand(time(0));

    int igracKompjuter = rand() % 3 + 1;
    int igrac;

    cout<<"List, Kamen, Nozhici!"<<endl;
    cout<<"1: List"<<endl;
    cout<<"2: Kamen"<<endl;
    cout<<"3: Nozhici"<<endl;
    cout<<"Odberi (1-3): ";
    cin>>igrac;

    if (igrac == igracKompjuter) {
        cout<<"Neresheno!"<<endl;
    } else if ((igrac == 1 && igracKompjuter == 3) || (igrac == 2 && igracKompjuter == 1) || (igrac == 3 && igracKompjuter == 2)) {
        system("CLS");
        cout<<"Kompjuter: "<<proveriIzbor(igracKompjuter)<<"\nVie: "<<proveriIzbor(igrac)<<endl;
        cout<<"\n\nChestitki, vie pobedivte!"<<endl;
    } else {
        system("CLS");
        cout<<"Kompjuter: "<<proveriIzbor(igracKompjuter)<<"\nVie: "<<proveriIzbor(igrac)<<endl;
        cout<<"\n\nKompjuterot e pobednik!"<<endl;
    }

    return 0;
}