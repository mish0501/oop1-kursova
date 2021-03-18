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
	Estate() {
		address = "Shumen";
		owner = "Mihail";
		price = 50000;
		size = 80.00;
	}

	Estate(string Address, string Owner, int Price, double Size) {
		address = address;
		owner = owner;
		price = price;
		size = size;
	}

	Estate(const Estate& other) {
		address = other.address;
		owner = other.owner;
		price = other.price;
		size = other.size;
	}

	const string& getAddress() const {
		return address;
	}

	const int& getPrice() const {
		return price;
	}

	const double& getSize() const {
		return size;
	}

	void setPrice(const int& Price) {
		price = Price;
	}

	void setAddress(const string& Address) {
		address = Address;
	}

	void setOwner(const string& Owner) {
		owner = Owner;
	}

	void setSize(const double& Size) {
		size = size;
	}

	virtual void printEstate() = 0;
};

