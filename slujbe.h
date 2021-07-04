#pragma once
#ifndef PROIECT_POO_1_SLUJBE_H
#define PROIECT_POO_1_SLUJBE_H

#include "angajat.h"
#include "magazin.h"
class Manager: public Angajat {
    public:
    Manager();
    Manager(std::string, std::string, int);
    ~Manager();
    void marire() {Angajat::marire();};
    int get_salariu_initial();
};

class Marfar: public Angajat {
    public:
    Marfar();
    Marfar(std::string, std::string, int);
    ~Marfar();
    void marire() {Angajat::marire();};
    int get_salariu_initial();
};

class Casier: public Angajat {
    public:
    Casier();
    Casier(std::string, std::string, int);
    ~Casier();
    void marire() {Angajat::marire();};
    int get_salariu_initial();
};

#endif //PROIECT_POO_1_SLUJBE_H
