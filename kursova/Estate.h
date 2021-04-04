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

	const string& getOwner() const;

	void setPrice(const int& Price);

	void setAddress(const string& Address);

	void setOwner(const string& Owner);

	void setSize(const double& Size);

	bool operator<(Estate& e);

	friend ostream& operator<<(ostream& out, Estate& e);

	virtual void printEstate(ostream& out) = 0;
	virtual const int& getRoom() const;
	virtual const int& getFloor() const;
	virtual const double& getYardSize() const;
	virtual const list<string>& getComunications() const;
};

