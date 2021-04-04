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

	void search(string address, string owner, int minPrice, int maxPrice, double size, int room, int floor, double yardSize, list<string> comunications, string estateType);

	void printFoundEstates(list<Estate*> found, list<Estate*>* vip = nullptr);
};

