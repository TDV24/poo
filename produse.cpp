#include "produse.h"
#include "exceptie.h"
Televizor::Televizor()
{
    nume="";
    categorie="";
    pret=0;
    redus=0;
}
Televizor::Televizor(std::string nume, float pret, bool redus): Produs(nume, pret, redus)
{
    this->categorie="Televizor";
}
void Televizor::reducere()
{
    if(this->redus == 1)
    {
        throw Exceptie();
    }
    else if(this->pret > 1000 && this->pret < 5000 && this->redus == 0)
    {
        this->pret = 0.7 * this->pret;
        this->redus = 1;
    }
    else
    {
        std::cout<<"Produsul "<<this->nume<<" nu poate fi redus.";
    }
}
void Televizor::info_produs()
{
    std::cout<<this->nume<<"este un "<<this->categorie<<" ce costa "<<this->pret<<" acesta fiind pretul ";
    if(this->redus == 0)
    {
        std::cout<<"intreg.";
    }
    else
    {
        std::cout<<"redus.";
    }
}
Televizor::~Televizor()
{
    nume="";
    categorie="";
    pret=0;
    redus=0;
}
Telefon::Telefon()
{
    nume="";
    categorie="";
    pret=0;
    redus=0;
}
Telefon::Telefon(std::string nume, float pret, bool redus): Produs(nume, pret, redus)
{
    this->categorie="Telefon";
}
void Telefon::reducere()
{
    if(this->redus == 1)
    {
        throw Exceptie();
    }
    else if(this->pret > 1000 && this->pret < 5000 && this->redus == 0)
    {
        this->pret = 0.7 * this->pret;
        this->redus = 1;
    }
    else
    {
        std::cout<<"Produsul "<<this->nume<<" nu poate fi redus.";
    }
}
void Telefon::info_produs()
{
    std::cout<<this->nume<<"este un "<<this->categorie<<" ce costa "<<this->pret<<" acesta fiind pretul ";
    if(this->redus == 0)
    {
        std::cout<<"intreg.";
    }
    else
    {
        std::cout<<"redus.";
    }
}
Telefon::~Telefon()
{
    nume="";
    categorie="";
    pret=0;
    redus=0;
}
Calculator::Calculator()
{
    nume="";
    categorie="";
    pret=0;
    redus=0;
}
Calculator::Calculator(std::string nume, float pret, bool redus): Produs(nume, pret, redus)
{
    this->categorie="Calculator";
}
Calculator::Calculator(const Calculator &copie_calculator)
{
    this->nume=copie_calculator.nume;
    this->categorie=copie_calculator.categorie;
    this->pret=copie_calculator.pret;
    this->redus=copie_calculator.redus;
}
Calculator Calculator::operator=(const Calculator& copie_calculator)
{
    this->nume=copie_calculator.nume;
    this->categorie=copie_calculator.categorie;
    this->pret=copie_calculator.pret;
    this->redus=copie_calculator.redus;
    return *this;
}
std::ostream& operator<<(std::ostream& o, const Calculator& copie_calculator)
{
    o<<"Acest "<<copie_calculator.categorie<<" are denumirea "<<copie_calculator.nume<<" fiind la pretul ";
    if(copie_calculator.redus == 0)
    {
        o<<"intreg de "<<copie_calculator.pret<<".";
    }
    else
    {
        o<<"redus de "<<copie_calculator.pret<<".";
    }
    return o;
};
void Calculator::reducere()
{
    if(this->redus == 1)
    {
        throw Exceptie();
    }
    else if(this->pret > 1000 && this->pret < 5000 && this->redus == 0)
    {
        this->pret = 0.7 * this->pret;
        this->redus = 1;
    }
    else
    {
        std::cout<<"Produsul "<<this->nume<<" nu poate fi redus.";
    }
}
void Calculator::info_produs()
{
    std::cout<<this->nume<<"este un "<<this->categorie<<" ce costa "<<this->pret<<" acesta fiind pretul ";
    if(this->redus == 0)
    {
        std::cout<<"intreg.";
    }
    else
    {
        std::cout<<"redus.";
    }
}
Calculator::~Calculator()
{
    nume="";
    categorie="";
    pret=0;
    redus=0;
}