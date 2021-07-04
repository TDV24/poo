//
// Created by Dragos on 7/3/2021.
//

#include "slujbe.h"
#include "magazin.h"

Manager::Manager()
{
    nume="";
    prenume="";
    slujba="";
    salariu=0;
    varsta=0;
}
Manager::Manager(std::string nume, std::string prenume, int varsta): Angajat(nume, prenume, varsta)
{
    this->slujba="Manager";
    this->salariu=Magazin::salariu_initial_manager;
}
int Manager::get_salariu_initial()
{
    return Magazin::salariu_initial_manager;
}
Manager::~Manager()
{
    nume="";
    prenume="";
    slujba="";
    salariu=0;
    varsta=0;
}
Marfar::Marfar()
{
    nume="";
    prenume="";
    slujba="";
    salariu=0;
    varsta=0;
}
Marfar::Marfar(std::string nume, std::string prenume, int varsta): Angajat(nume, prenume, varsta)
{
    this->slujba="Marfar";
    this->salariu= Magazin::salariu_initial_marfar;
}
int Marfar::get_salariu_initial()
{
    return Magazin::salariu_initial_marfar;
}
Marfar::~Marfar()
{
    nume="";
    prenume="";
    slujba="";
    salariu=0;
    varsta=0;
}
Casier::Casier()
{
    nume="";
    prenume="";
    slujba="";
    salariu=0;
    varsta=0;
}
Casier::Casier(std::string nume, std::string prenume, int varsta): Angajat(nume, prenume, varsta)
{
    this->slujba="Casier";
    this->salariu= Magazin::salariu_initial_casier;
}
int Casier::get_salariu_initial()
{
    return Magazin::salariu_initial_casier;
}
Casier::~Casier()
{
    nume="";
    prenume="";
    slujba="";
    salariu=0;
    varsta=0;
}