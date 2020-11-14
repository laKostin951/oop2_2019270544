#include "Radnik.hpp"

Radnik::Radnik()
{
};

Radnik::Radnik(std::string ime, std::string prezime, double plata,
               Radnik* nadredjeni)
	: ime(ime), prezime(prezime), plata(plata), nadredjeni(nadredjeni)
{
};

std::string Radnik::getIme() const { return this->ime; }
void Radnik::setIme(std::string ime) { this->ime = ime; }

std::string Radnik::getPrezime() const { return this->prezime; }
void Radnik::setPrezime(std::string prezime) { this->prezime = prezime; }

double Radnik::getPlata() const { return this->plata; }
void Radnik::setPlata(double plata) { this->plata = plata; }

Radnik* Radnik::getNadredjeni() const { return this->nadredjeni; }

void Radnik::setNadredjeni(Radnik* nadredjeni)
{
	this->nadredjeni = nadredjeni;
}
