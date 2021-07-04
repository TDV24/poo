#pragma once
#ifndef PROIECT_POO_1_PRODUSE_H
#define PROIECT_POO_1_PRODUSE_H

#include "produs.h"
#include <iostream>
class Televizor: public Produs {
    public:
    Televizor();
    Televizor(std::string, float, bool);
    ~Televizor();
    void reducere();
    void info_produs();
};
class Telefon: public Produs {
    public:
    Telefon();
    Telefon(std::string, float, bool);
    ~Telefon();
    void reducere();
    void info_produs();
};
class Calculator: public Produs{
    public:
    Calculator();
    Calculator(std::string, float, bool);
    ~Calculator();
    Calculator(const Calculator& copie_calculator);
    Calculator operator=(const Calculator& copie_calculator);
    friend std::ostream& operator<<(std::ostream& o, const Calculator& copie_calculator);
    void reducere();
    void info_produs();
};

#endif //PROIECT_POO_1_PRODUSE_H
