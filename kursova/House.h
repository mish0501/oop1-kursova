#pragma once
#include "Flat.h"

class House :
	public Flat
{
private:
	double yardSize;

public:
	House(string Address, string Owner, int Price, double Size, int Room, int Floor, double YardSize);

	void printEstate(ostream& out);

	void setYardSize(const double& YardSize);

	const double& getYardSize() const;

	friend ostream& operator<<(ostream& out, House& h);
};

