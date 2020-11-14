#ifndef DATUM_HPP
#define DATUM_HPP

class Datum {
  public:
    const int dan;
    const int  mesec;
    const int  godina;

    Datum(int dan, int mesec, int godina)
        : dan(dan), mesec(mesec), godina(godina){};
};
#endif