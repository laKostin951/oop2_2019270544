#ifndef REVIZOR_HPP
#define REVIZOR_HPP

#include <string>
#include <vector>

#include "Datum.hpp"
#include "Radnik.hpp"

class Revizor : public Radnik {
  private:
    std::vector<Datum *> datumiIzvrsavanjaRevizije;

  public:
    // KOSNTRUKTOR
    Revizor();
    Revizor(std::string ime, std::string prezime, double plata,
                   Radnik *nadredjeni);

    // GET I SET

    // METODE
};

#endif;