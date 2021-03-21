#pragma once
#include "Broker.h"
class DishonestBroker :
    public Broker
{
private:
	RealEstate* vip;

public:
	DishonestBroker();

	DishonestBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates);

	void addVIP(Estate* estate);

	void deleteVIP(Estate* estate);
};

