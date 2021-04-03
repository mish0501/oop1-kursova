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

void VIPBroker::search(string address, string owner, int minPrice, int maxPrice, double size, int room, int floor, double yardSize, string estateType) {
	list<Estate*> found;
	for (auto estate : estates->getEstates()) {
		if (
			(address != "" && estate->getAddress() == address) ||
			(owner != "" && estate->getOwner() == owner) ||
			(minPrice != 0 && estate->getPrice() >= minPrice) ||
			(maxPrice != 0 && estate->getPrice() <= maxPrice) ||
			(size != 0 && estate->getSize() == size) ||
			(room != 0 && estate->getRoom() == room) ||
			(floor != 0 && estate->getFloor() == floor) ||
			(yardSize != 0 && estate->getYardSize() == yardSize) ||
			(estateType != "" && typeid(*estate).name() == "class " + estateType)
			) {
			found.push_back(estate);
		}
	}

	list<Estate*> vipEstates = vip->getEstates();

	found.sort();
	vipEstates.sort();

	list<Estate*> foundVipEstates;

	set_intersection(found.begin(), found.end(), vipEstates.begin(), vipEstates.end(), back_inserter(foundVipEstates));

	list<Estate*> foundWithoutVipEstates;
	set_difference(found.begin(), found.end(), foundVipEstates.begin(), foundVipEstates.end(), back_inserter(foundWithoutVipEstates));

	printFoundEstates(foundWithoutVipEstates, &foundVipEstates);
}
