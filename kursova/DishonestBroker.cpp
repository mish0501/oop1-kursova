#include "DishonestBroker.h"

DishonestBroker::DishonestBroker() :
	VIPBroker() {}

DishonestBroker::DishonestBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates) :
	VIPBroker(Name, Percent, Estates, vipEstates) {}

DishonestBroker::DishonestBroker(const string& Name, const double& Percent, RealEstate* Estates) :
	VIPBroker(Name, Percent, Estates) {}
