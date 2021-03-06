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

	void search(string address, string owner, int minPrice, int maxPrice, double size, int room, int floor, double yardSize, list<string> comunications, string estateType);
};

