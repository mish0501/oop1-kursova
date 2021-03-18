#pragma once
#include "Flat.h"

class House :
	public Flat
{
private:
	double yardSize;

public:
	void printEstate() {
		cout << "Address: " << address << endl
			<< "Owner: " << owner << endl
			<< "Price: " << price << endl
			<< "Size: " << size << endl
			<< "Room: " << room << endl
			<< "Flor: " << floor << endl
			<< "YardSize: " << yardSize << endl
			<< endl;
	}

	void setYardSize(const double& YardSize) {
		yardSize = YardSize;
	}

	const double& getYardSize() const {
		return yardSize;
	}
};

