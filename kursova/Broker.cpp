#include "Broker.h"

Broker::Broker() {
	name = "Mihail";
	percent = 0.5;
	estates = new RealEstate();
}

Broker::Broker(const string& Name, const double& Percent, RealEstate* Estates) {
	name = Name;
	percent = Percent;
	estates = Estates;
}

void Broker::setEstates(RealEstate* Estates) {
	estates = Estates;
}

RealEstate* Broker::getEstates() {
	return estates;
}

void Broker::setName(const string& Name) {
	name = Name;
}

const string& Broker::getName() const {
	return name;
}

void Broker::setPercent(const double& Percent) {
	percent = Percent;
}

const double& Broker::getPercent() const {
	return percent;
}
