#pragma once
#include "kursova.h"
#include "RealEstate.h"

class Broker
{
protected:
	RealEstate* estates;
	string name;
	double percent;

public:
	Broker();

	Broker(const string& Name, const double& Percent, RealEstate* Estates);

	void setEstates(RealEstate* Estates);

	RealEstate* getEstates();

	void setName(const string& Name);

	const string& getName() const;

	void setPercent(const double& Percent);

	const double& getPercent() const;

	virtual void addVIP(Estate* estate) = 0;
	virtual void showVIPs() = 0;

};

