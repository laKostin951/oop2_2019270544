#include "Revizor.hpp"

Revizor::Revizor(){};
Revizor::Revizor(std::string ime, std::string prezime, double plata,
                 Radnik *nadredjeni)
    : Radnik(ime, prezime, plata, nadredjeni){};
