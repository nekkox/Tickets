//
// Created by NEKO on 06.12.2023.
//

#ifndef CLASSES_TOSOBA_H
#define CLASSES_TOSOBA_H

#include <iostream>
#include <string>

class Tosoba {
    std::string nazwisko;
    int wiek;
public:
    void wypisz() {
        std::cout << nazwisko << ", lat: " << wiek << std::endl;
    }

    void zapamietaj(std::string napis, int lata);
};


#endif //CLASSES_TOSOBA_H
