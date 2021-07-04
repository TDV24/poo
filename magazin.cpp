#include "magazin.h"
Magazin::~Magazin()
{
    for(int i = produse.size(); i >= 0; i++)
        delete produse[i];
    for(int i = angajati.size(); i >= 0; i++)
        delete angajati[i];
}
void Magazin::adaugare_produs(Televizor produs)
{
    produse.push_back(new Televizor(produs));
}
void Magazin::adaugare_produs(Telefon produs)
{
    produse.push_back(new Telefon(produs));
}
void Magazin::adaugare_produs(Calculator produs)
{
    produse.push_back(new Calculator(produs));
}
//void Magazin::adaugare_produs(Manager angajat)
//{
//    angajati.push_back(new Manager(angajat));
//}
//void Magazin::adaugare_produs(Marfar angajat)
//{
//    angajati.push_back(new Marfar(angajat));
//}
//void Magazin::adaugare_produs(Casier angajat)
//{
//    angajati.push_back(new Casier(angajat));
//}
void Magazin::inventar()
{
    std::cout<<"Urmatoarele produse se afla in magazin:\n";
    for(int i=0; i<produse.size(); i++)
    {
        std::cout<<"\n";
        produse[i]->afisare_date_produs();
    }
    std::cout<<"\n";
}