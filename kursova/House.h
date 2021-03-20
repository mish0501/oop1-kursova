#pragma once
#include "Flat.h"

class House :
	public Flat
{
private:
	double yardSize;

public:
	House(string Address, string Owner, int Price, double Size, int Room, int Floor, double YardSize);

	void printEstate();

	void setYardSize(const double& YardSize);

	const double& getYardSize() const;
};

