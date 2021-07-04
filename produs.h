#pragma once
#ifndef TEMA_POO_ANGAJAT_H
#define TEMA_POO_ANGAJAT_H


#include <iostream>
#include <cstring>

class Produs
{
protected:
    std::string nume, categorie;
    float pret;
    bool redus;

public:
    Produs()
    {
        nume="";
        categorie="";
        pret=0;
        redus=0;
    }
    Produs(std::string nume, float pret, bool redus)
    {
        this->nume=nume;
        this->categorie="";
        this->pret=pret;
        this->redus=redus;
    }
    void afisare_date_produs()
    {
        std::cout<<this->nume<<"este un "<<this->categorie<<" ce costa "<<this->pret<<" aceste fiind pretul ";
        if(this->redus == 0)
        {
            std::cout<<"intreg.";
        }
        else
        {
            std::cout<<"redus.";
        }
    }
    std::string getnume()
    {
        return this->nume;
    }
    float getpret()
    {
        return this->pret;
    }
    bool getredus()
    {
        return this->redus;
    }
    std::string getcategorie()
    {
        return this->categorie;
    }
    void setnume(std::string nume_nou)
    {
        this->nume=nume_nou;
    }
    void setpret(float pret_nou)
    {
        this->pret=pret_nou;
    }
    void setredus(bool redus_nou)
    {
        this->redus=redus_nou;
    }
    virtual void reducere()=0;
    virtual void info_produs()=0;
    virtual ~Produs()
    {
        std::cout<<"Produsul a fost vandut.\n";
    }
};
#endif //TEMA_POO_ANGAJAT_H