#pragma once
#include "Estate.h"

enum class Comunication { water, electricity, phone, road, sewage };

class Plot :
	public Estate
{
private:
	list<Comunication> comunication;
	double yardSize;

public:
	Plot(string Address, string Owner, int Price, double Size, list<string> comunications, double YardSize);

	void printEstate(ostream& out);

	void setYardSize(const double& YardSize);

	const double& getYardSize() const;

	void setComunications(const list<string> comunications);

	const list<string>& getComunications() const;
};

