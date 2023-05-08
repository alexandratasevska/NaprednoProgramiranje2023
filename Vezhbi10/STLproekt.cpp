#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

static const string pesna_tekst = "INKI1002Aleksandra Weeknd I hurt myself a hundred times just to feel something in my soul, I kept knocking even though I knew whats behind that door";

int najgolemaCifra(int broj_na_indeks)
{
    int maksimalna_cifra = 0;
    while (broj_na_indeks)
    {
        int cifra = broj_na_indeks % 10;
        maksimalna_cifra = max(maksimalna_cifra, cifra);
        broj_na_indeks /= 10;
    }
    return maksimalna_cifra;
}

vector<int> kreirajVector(const string &pesna_tekst, int najgolema_cifra)
{
    vector<int> vector;
    for (char ch : pesna_tekst)
    {
        vector.push_back(static_cast<int>(ch) + najgolema_cifra);
    }
    return vector;
}

void pechatiVector(const vector<int> &vector)
{
    for (int vrednost : vector)
    {
        cout << vrednost << ' ';
    }
    cout << '\n';
}

void zachuvajFile(const vector<int> &vector, const string &ime_na_file)
{
    ofstream ofs(ime_na_file);
    if (ofs.is_open())
    {
        for (int vrednost : vector)
        {
            ofs << vrednost << ' ';
        }
        ofs.close();
    }
    else
    {
        cerr << "Nemozhe da se otvori fajlot " << ime_na_file << '\n';
    }
}

int main()
{
    int broj_na_indeks;
    cout << "Vnesi broj na indeks: ";
    cin >> broj_na_indeks;

    int najgolema_cifra = najgolemaCifra(broj_na_indeks);
    vector<int> vector = kreirajVector(pesna_tekst, najgolema_cifra);

    sort(vector.begin(), vector.end());
    pechatiVector(vector);

    stringstream ss;
    ss << "INKI" << broj_na_indeks << ".Proekt3";
    string ime_na_file = ss.str();
    zachuvajFile(vector, ime_na_file);

    return 0;
}