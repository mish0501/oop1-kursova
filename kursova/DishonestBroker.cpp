#include "DishonestBroker.h"

DishonestBroker::DishonestBroker() : Broker() {
	vip = new RealEstate();
}

DishonestBroker::DishonestBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates) : Broker(Name, Percent, Estates) {
	vip = vipEstates;
}

void DishonestBroker::addVIP(Estate* estate) {
	vip->registerEstate(estate);
}

void DishonestBroker::deleteVIP(Estate* estate) {
	vip->deleteEstate(estate);
}