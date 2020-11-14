#include "Racunovodja.hpp"

// KOSNTRUKTOR
Racunovodja::Racunovodja()
{
};

Racunovodja::Racunovodja(std::string ime, std::string prezime, double plata,
                         Radnik* nadredjeni, std::string licencuIzdao,
                         double maksimalnPrihodFirme)
	: Radnik(ime, prezime, plata, nadredjeni), licencuIzdao(licencuIzdao),
	  maksimalnPrihodFirme(maksimalnPrihodFirme)
{
};

// GET I SET
std::string Racunovodja::getLicencuIzdao() const { return this->licencuIzdao; }

void Racunovodja::setLicencuIzdao(std::string licencuIzdao)
{
	this->licencuIzdao = licencuIzdao;
}

double Racunovodja::getMaksimalnPrihodFirme() const
{
	return this->maksimalnPrihodFirme;
}

void Racunovodja::setMaksimalnPrihodFirme(double maksimalnPrihodFirme)
{
	this->maksimalnPrihodFirme = maksimalnPrihodFirme;
}

// METODE
