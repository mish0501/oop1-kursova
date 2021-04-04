#include "SimpleBroker.h"

SimpleBroker::SimpleBroker() : Broker() {}

SimpleBroker::SimpleBroker(const string& Name, const double& Percent, RealEstate* Estates) : Broker(Name, Percent, Estates) {}

void SimpleBroker::addVIP(Estate* estate) {
	cout << "Simple broker doesn't have VIP estates";
}

void SimpleBroker::deleteVIP(Estate* estate) {
	cout << "Simple broker doesn't have VIP estates";
}

void SimpleBroker::search(string address, string owner, int minPrice, int maxPrice, double size, int room, int floor, double yardSize, list<string> comunications, string estateType) {
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
			(comunications != list<string>() && estate->getComunications() == comunications) ||
			(estateType != "" && typeid(estate).name() == estateType)
			) {
			found.push_back(estate);
		}
	}

	printFoundEstates(found);
}

void SimpleBroker::printFoundEstates(list<Estate*> found, list<Estate*>* vip) {
	for (auto e : found) {
		cout << e;
	}
}
