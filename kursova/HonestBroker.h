#pragma once
#include "Broker.h"
class HonestBroker :
    public Broker
{
private:
    RealEstate* vip;

public:
	HonestBroker();

	HonestBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates);

	void addVIP(Estate* estate);

	void deleteVIP(Estate* estate);
};

