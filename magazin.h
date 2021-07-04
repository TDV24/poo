#pragma once
#ifndef PROIECT_POO_1_MAGAZIN_H
#define PROIECT_POO_1_MAGAZIN_H

#include "slujbe.h."
#include "produse.h"
#include <vector>
#include <memory>

class Produs;

class Magazin {
    private:
    friend class Manager;
    friend class Marfar;
    friend class Casier;
    static const int salariu_initial_manager=4000;
    static const int salariu_initial_marfar=3000;
    static const int salariu_initial_casier=2500;
    std::vector <Produs*> produse;
    std::vector <Angajat*> angajati;
    public:
    Magazin();
    ~Magazin();
    void adaugare_produs(Televizor produs);
    void adaugare_produs(Telefon produs);
    void adaugare_produs(Calculator produs);
//    void adaugare_produs(Manager angajat);
//    void adaugare_produs(Marfar angajat);
//    void adaugare_produs(Casier angajat);
    void inventar();
};


#endif //PROIECT_POO_1_MAGAZIN_H
