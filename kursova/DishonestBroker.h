#pragma once
#include "VIPBroker.h"
class DishonestBroker :
    public VIPBroker
{
public:
	DishonestBroker();

	DishonestBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates);
};

