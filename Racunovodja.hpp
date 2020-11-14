#ifndef RACUNOVODJA_HPP
#define RACUNOVODJA_HPP

#include <string>

#include "Radnik.hpp"

class Racunovodja : public Radnik
{
private:
	std::string licencuIzdao;
	double maksimalnPrihodFirme;

	// KOSNTRUKTOR
	Racunovodja();
	Racunovodja(std::string ime, std::string prezime, double plata,
	            Radnik* nadredjeni, std::string licencuIzdao,
	            double maksimalnPrihodFirme);

	// GET I SET
	std::string getLicencuIzdao() const;
	void setLicencuIzdao(std::string licencuIzdao);

	double getMaksimalnPrihodFirme() const;
	void setMaksimalnPrihodFirme(double maksimalnPrihodFirme);
	// METODE
};
#endif
