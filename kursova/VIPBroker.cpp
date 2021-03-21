#include "VIPBroker.h"

VIPBroker::VIPBroker() : Broker() {
	vip = new RealEstate();
}

VIPBroker::VIPBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates) :
	Broker(Name, Percent, Estates) {
	vip = vipEstates;
}

VIPBroker::VIPBroker(const string& Name, const double& Percent, RealEstate* Estates) :
	Broker(Name, Percent, Estates) {
	vip = new RealEstate();
}

void VIPBroker::addVIP(Estate* estate) {
	vip->registerEstate(estate);
}

void VIPBroker::deleteVIP(Estate* estate) {
	vip->deleteEstate(estate);
}