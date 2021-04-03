#include "DishonestBroker.h"

DishonestBroker::DishonestBroker() :
	VIPBroker() {}

DishonestBroker::DishonestBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates) :
	VIPBroker(Name, Percent, Estates, vipEstates) {}

DishonestBroker::DishonestBroker(const string& Name, const double& Percent, RealEstate* Estates) :
	VIPBroker(Name, Percent, Estates) {}

void DishonestBroker::printFoundEstates(list<Estate*> found, list<Estate*>* vip) {
	for (auto e : *vip) {
		e->setPrice(e->getPrice() * ((double)rand() / (RAND_MAX)));
		e->setSize(e->getSize() * ((double)rand() / (RAND_MAX)));
		cout << e;
	}

	for (auto e : found) {
		cout << e;
	}
}
