#pragma once
#include "VIPBroker.h"
class HonestBroker :
    public VIPBroker
{
public:
	HonestBroker();

	HonestBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates);

	HonestBroker(const string& Name, const double& Percent, RealEstate* Estates);
};

