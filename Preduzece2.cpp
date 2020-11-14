#include "Preduzece2.h"
// KONSTRUKTOR


Preduzece2::Preduzece2(int id, std::string naziv, int maticni_broj,
                                   int pib)
    : ID(id), naziv(naziv), maticni_broj(maticni_broj), pib(pib) {}

// GET I SET

int Preduzece2::get_id() const { return ID; }

void Preduzece2::set_id(int id) { ID = id; }

std::string Preduzece2::get_naziv() const { return naziv; }

void Preduzece2::set_naziv(std::string naziv) { this->naziv = naziv; }

int Preduzece2::get_maticni_broj() const { return maticni_broj; }

void Preduzece2::set_maticni_broj(int maticni_broj) {
  this->maticni_broj = maticni_broj;
}

int Preduzece2::get_pib() const { return pib; }

void Preduzece2::set_pib(int pib) { this->pib = pib; }

//METODE