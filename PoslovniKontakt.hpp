#ifndef POSLOVNI_KONTAKT_HPP
#define POSLOVNI_KONTAKT_HPP

#include <string>
class Preduzece {};
class PoslovniKontakt {
  private:
    std::string ime;
    std::string prezime;
    int brojTelefona;
    Preduzece *preduzece;

  public:
    // KONSTRUKTOR
    PoslovniKontakt();
    PoslovniKontakt(std::string  ime, std::string  prezime,
                    int brojTelefona, Preduzece *preduzece);
    // GET I SET
    std::string getIme() const;
    void setIme(std::string ime);

    std::string getPrezime() const;
    void setPrezime(std::string prezime);

    int getBrojTelefona() const;
    void setBrojTelefona(int brojTelefona);

    Preduzece *getPreduzece() const;
    void setPreduzece(Preduzece *preduzece);

    // METODE
};
#endif