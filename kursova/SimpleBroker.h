#pragma once
#include "Broker.h"
class SimpleBroker :
    public Broker
{

public:
	SimpleBroker();

	SimpleBroker(const string& Name, const double& Percent, RealEstate* Estates);

	void addVIP(Estate* estate);

	void deleteVIP(Estate* estate);
};

