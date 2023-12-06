#include "Tbilet.h"
#include <iostream>
#include <vector>

using namespace std;
int Tbilet::wydrukowano_biletow = 0;

void Tbilet::zapamietaj(string sk, string dok, Trodzaj_pociagu poc, int kl) {
    this->skad = sk;
    this->dokad = dok;
    this->jaki_pociag = poc;
    this->klasa_kolejowa = kl;
}

void Tbilet::wypisz() {
    ++Tbilet::wydrukowano_biletow;
    int szerokosc_biletu = 55;

    string kreska = "*" + string(szerokosc_biletu, '-') + "*\n";
    string linijka1 = "| Bilet (nr: " + to_string(Tbilet::wydrukowano_biletow) +
                      ") na pociag " + opis_rodzaju();
    string linijka2 = "| " + this->skad + " ---> " + this->dokad + ", klasa " + to_string(this->klasa_kolejowa);
    cout << kreska << linijka1 << endl << linijka2 << endl << kreska;
}

string Tbilet::opis_rodzaju() {
    vector<string> opisy = {"osobowy (lub regionalny)", "przyspieszony (lekko)",
                            "pospieszny", "InterCity ekspres"};
    return opisy[this->jaki_pociag];
}