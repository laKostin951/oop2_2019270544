#include "PoslovniKontakt.hpp"

// KONSTRUKTOR
PoslovniKontakt::PoslovniKontakt()
{
};

PoslovniKontakt::PoslovniKontakt(std::string ime, std::string prezime,
                                 int brojTelefona, Preduzece* preduzece)
	: ime(ime), prezime(prezime), brojTelefona(brojTelefona),
	  preduzece(preduzece)
{
};
// GET I SET
std::string PoslovniKontakt::getIme() const { return this->ime; };
void PoslovniKontakt::setIme(std::string ime) { this->ime = ime; }

std::string PoslovniKontakt::getPrezime() const { return this->prezime; }

void PoslovniKontakt::setPrezime(std::string prezime)
{
	this->prezime = prezime;
}

int PoslovniKontakt::getBrojTelefona() const { return this->brojTelefona; }

void PoslovniKontakt::setBrojTelefona(int brojTelefona)
{
	this->brojTelefona = brojTelefona;
}

Preduzece* PoslovniKontakt::getPreduzece() const { return this->preduzece; }

void PoslovniKontakt::setPreduzece(Preduzece* preduzece)
{
	this->preduzece = preduzece;
}

// METODE
