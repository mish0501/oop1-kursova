#pragma once
#include "kursova.h"

class Estate
{
protected:
	string address;
	string owner;
	int price;
	double size;

public:
	Estate();

	Estate(string Address, string Owner, int Price, double Size);

	Estate(const Estate& other);

	const string& getAddress() const;

	const int& getPrice() const;

	const double& getSize() const;

	void setPrice(const int& Price);

	void setAddress(const string& Address);

	void setOwner(const string& Owner);

	void setSize(const double& Size);

	virtual void printEstate() = 0;
};

