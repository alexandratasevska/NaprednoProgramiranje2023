#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int main() {
    string znaci[] = {"Srce", "Karo", "Detelina", "List"};
    string broevi[] = {"AS", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Dzandar", "Dama", "Pop"};
    string dzokeri[] = {"Crven Joker", "Crn Joker"};
 
    string shpil[54]; // niza za shpil od 52 karti + 2 dzokeri
 
    int i = 0;
 
    //dodavanje karti(stringovi) vo shpilot spored brojot i znakot
    for (string znak : znaci) {
        for (string broj : broevi) {
            shpil[i++] =  broj + " " +  znak;
        }
    }
 
    //dodavanje na dozkeri vo nizata od kartite
    for (string dzoker : dzokeri) {
        shpil[i++] = dzoker;
    }
 
    // pechatenje na izmeshanite karti
    cout<<"\n\nNeizmeshani: \n"<<endl;
    for (int i = 0; i < 54; i++) {
        cout << shpil[i] << endl;
    }
 
    // meshanje shpil na karti so funckijata swap koja gi promenuva indeksite na elementite so random brojot koj go dava funkcijata rand()
    srand(time(nullptr));
    for (int i = 0; i < 54; i++) {
        int j = rand() % 54;
        swap(shpil[i], shpil[j]);
    }
 
    // pechatenje na izmeshanite karti
    cout<<"\n\nIzmeshani: \n"<<endl;
    for (int i = 0; i < 54; i++) {
        cout << shpil[i] << endl;
    }
 
    return 0;
}