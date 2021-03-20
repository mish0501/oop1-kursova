#pragma once
#include "kursova.h"
#include "Estate.h"

class RealEstate
{
private:
	list<Estate*> estates;

public:
	void registerEstate(Estate* estate);

	void deleteEstate(Estate* estate);

	list<Estate*> getEstates();
	
	void printEstates();
};
