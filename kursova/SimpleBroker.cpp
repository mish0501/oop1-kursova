#include "SimpleBroker.h"

SimpleBroker::SimpleBroker() : Broker() {}

SimpleBroker::SimpleBroker(const string& Name, const double& Percent, RealEstate* Estates) : Broker(Name, Percent, Estates) {}

void SimpleBroker::addVIP(Estate* estate) {
	cout << "Simple broker doesn't have VIP estates";
}

void SimpleBroker::deleteVIP(Estate* estate) {
	cout << "Simple broker doesn't have VIP estates";
}