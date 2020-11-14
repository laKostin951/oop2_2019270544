#pragma once
#ifndef PREDUZECE_HPP
#define PREDUZECE_HPP

#include <string>
#include <vector>


#include "Odeljnje.h"

class Preduzece2
{
private:
	int ID;
	std::string naziv;
	int maticni_broj;
	int pib;
	std::vector<Odeljnje*> Odeljenja;

	//KONSTRUKTOR


public:
        Preduzece2(int id, std::string naziv, int maticni_broj,
                                 int pib);

	//GET I SET

	int get_id() const;

	void set_id(int id);

	std::string get_naziv() const;

	void set_naziv(std::string naziv);

	int get_maticni_broj() const;

	void set_maticni_broj(int maticni_broj);
        

	int get_pib() const;

	void set_pib(int pib);

	// METODE
};

#endif
