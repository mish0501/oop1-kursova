#pragma once
#include "Broker.h"
class VIPBroker :
    public Broker
{

protected:
    RealEstate* vip;

public:
	VIPBroker();

	VIPBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates);

	VIPBroker(const string& Name, const double& Percent, RealEstate* Estates);

	void addVIP(Estate* estate);

	void deleteVIP(Estate* estate);
};

