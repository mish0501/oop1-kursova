#include "HonestBroker.h"

HonestBroker::HonestBroker() : Broker() {
	vip = new RealEstate();
}

HonestBroker::HonestBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates) : Broker(Name, Percent, Estates) {
	vip = vipEstates;
}

void HonestBroker::addVIP(Estate* estate) {
	vip->registerEstate(estate);
}

void HonestBroker::deleteVIP(Estate* estate) {
	vip->deleteEstate(estate);
}
