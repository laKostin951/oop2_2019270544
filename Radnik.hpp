#ifndef RADNIK_HPP
#define RADNIK_HPP

#include <string>

class Radnik {
  private:
    std::string ime;
    std::string prezime;
    double plata;
    Radnik *nadredjeni;

  public:
    // KOSNTRUKTOR
    Radnik();
    Radnik(std::string ime, std::string prezime, double plata,
           Radnik *nadredjeni);

    // GET I SET
    std::string getIme() const;
    void setIme(std::string ime);

    std::string getPrezime() const;
    void setPrezime(std::string prezime);

    double getPlata() const;
    void setPlata(double plata);

    Radnik *getNadredjeni() const;
    void setNadredjeni(Radnik *nadredjeni);

    // METODE
};
#endif