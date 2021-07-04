#pragma once

#include <iostream>
#include <cstring>

class Angajat
{
protected:
    std::string nume, prenume, slujba;
    float salariu;
    int varsta;

public:
    Angajat()
    {
        nume="";
        prenume="";
        slujba="";
        salariu=0;
        varsta=0;
    }
    Angajat(std::string nume, std::string prenume, int varsta)
    {
        this->nume=nume;
        this->prenume=prenume;
        this->slujba="";
        this->varsta=varsta;
        this->salariu=0;
    }
    void afisare_date_angajat()
    {
        std::cout<<this->nume<<" "<<this->prenume<<", in varsta de "<<this->varsta<<" lucreaza ca "<<this->slujba<<" ";
        std::cout<<"cu salariul de "<<this->salariu<<".";
    }
    std::string getnume()
    {
        return this->nume;
    }
    std::string getprenume()
    {
        return this->prenume;
    }
    std::string getslujba()
    {
        return this->slujba;
    }
    int getvarsta()
    {
        return this->varsta;
    }
    int getsalariu()
    {
        return this->salariu;
    }
    void setnume(std::string nume_nou)
    {
        this->nume=nume_nou;
    }
    void setprenume(std::string prenume_nou)
    {
        this->prenume=prenume_nou;
    }
    void setvarsta(int varsta_noua)
    {
        this->varsta=varsta_noua;
    }
    void setsalariu(int salariu_nou) {
        this->salariu = salariu_nou;
    }
    void marire(){
        if (varsta > 50)
        {
            salariu = 1.3 * salariu;
        }
        else if(varsta > 25 && varsta <=50)
        {
            salariu = 1.2 * salariu;
        }
        else
        {
            std::cout<<"Salariul nu poate fi marit.";
        }
        std::cout<<"Salariul actualizat este "<<salariu<<"\n";
    };
    virtual ~Angajat()
    {
        std::cout<<"Angajatul a fost concediat.\n";
    }
};