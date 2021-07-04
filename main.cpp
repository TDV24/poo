#include <iostream>
#include <cstring>
#include "produse.h"
#include "slujbe.h"
int main() {
    Calculator calculator1("HP Pavilion", 4350, 0);
    std::cout<<calculator1<<'\n';
    Televizor televizor1("LG 4035", 2780, 1);
    Manager manager1("Ignicio", "Aurel", 53);
    manager1.marire();
    Telefon telefon1("Samsung A30", 950, 0);
    Calculator calculator2("Asus ROG", 5400, 1);
    Televizor televizor2("Phillips Xg", 6800, 0);
    Telefon telefon2("Apple 12", 4500, 0);
    try{
        calculator1.reducere();
        telefon1.reducere();
        televizor1.reducere();
    }
    catch(const std::exception& e)
    {
        std::cout<< e.what();
    }
    std::cout<<"\n";
    calculator1.reducere();
    std::cout<<"\n";
    telefon1.reducere();
    std::cout<<"\n";
    televizor1.reducere();
    std::cout<<"\n";
    Magazin magazin1;
    magazin1.adaugare_produs(telefon1);
    magazin1.adaugare_produs(telefon2);
    magazin1.adaugare_produs(televizor1);
    magazin1.adaugare_produs(televizor2);
    magazin1.adaugare_produs(calculator1);
    magazin1.adaugare_produs(calculator2);
    magazin1.inventar();
    return 0;
}
