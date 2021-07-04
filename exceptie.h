#pragma once
#ifndef PROIECT_POO_1_EXCEPTIE_H
#define PROIECT_POO_1_EXCEPTIE_H

#include <iostream>
#include <exception>
#include <cstring>
#include "produs.h"
#include "produse.h"
#include "magazin.h"
class Exceptie: public std::exception{
    public:
    Exceptie() {};
    ~Exceptie() {};
    const char* what() const throw()
    {
        return "Produsului respectiv i s-a aplicat o reducere.";
    }
};


#endif //PROIECT_POO_1_EXCEPTIE_H
