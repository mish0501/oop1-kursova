#include "HonestBroker.h"

HonestBroker::HonestBroker() : 
	VIPBroker() {}

HonestBroker::HonestBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates) :
	VIPBroker(Name, Percent, Estates, vipEstates) {}

HonestBroker::HonestBroker(const string& Name, const double& Percent, RealEstate* Estates) :
	VIPBroker(Name, Percent, Estates) {}
