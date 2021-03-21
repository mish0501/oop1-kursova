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

	void addVIP(Estate* estate);

	void deleteVIP(Estate* estate);
};

