#include "Komercijalista.hpp"

Komerciajlista::Komerciajlista(){};
Komerciajlista::Komerciajlista(std::string ime, std::string prezime,
                               double plata, Radnik *nadredjeni)
    : Radnik(ime, prezime, plata, nadredjeni){};
