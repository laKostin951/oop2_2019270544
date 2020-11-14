#ifndef KOMERCIJALISTA_HPP
#define KOMERCIJALISTA_HPP

#include <string>
#include <vector>

#include "PoslovniKontakt.hpp"
#include "Radnik.hpp"

class Komerciajlista : public Radnik {
  private:
    std::vector<PoslovniKontakt *> poslovniKontakti;

  public:
    // KOSNTRUKTOR
    Komerciajlista();
    Komerciajlista(std::string ime, std::string prezime, double plata,
                   Radnik *nadredjeni);

    // GET I SET

    // METODE
};

#endif;