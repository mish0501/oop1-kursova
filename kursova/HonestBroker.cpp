#include "HonestBroker.h"

HonestBroker::HonestBroker() : 
	VIPBroker() {}

HonestBroker::HonestBroker(const string& Name, const double& Percent, RealEstate* Estates, RealEstate* vipEstates) :
	VIPBroker(Name, Percent, Estates, vipEstates) {}

HonestBroker::HonestBroker(const string& Name, const double& Percent, RealEstate* Estates) :
	VIPBroker(Name, Percent, Estates) {}

void HonestBroker::printFoundEstates(list<Estate*> found, list<Estate*>* vip) {
	cout << setw(126) << setfill('-') << "" << endl;
	cout << setw(10) << setfill(' ') << left << "|Type"
		<< setw(25) << setfill(' ') << left << "|Address"
		<< setw(15) << setfill(' ') << left << "|Owner"
		<< setw(10) << setfill(' ') << left << "|Price"
		<< setw(10) << setfill(' ') << left << "|Size"
		<< setw(10) << setfill(' ') << left << "|Rooms"
		<< setw(10) << setfill(' ') << left << "|Floor"
		<< setw(15) << setfill(' ') << left << "|Yard size"
		<< setw(20) << setfill(' ') << left << "|Comunications"
		<< "|" << endl;
	cout << setw(126) << setfill('-') << "" << endl;
	
	for (auto e : *vip) {
		int prevPrice = e->getPrice();

		e->setPrice(prevPrice + prevPrice * percent);

		cout << *e;

		e->setPrice(prevPrice);
	}

	for (auto e : found) {
		cout << *e;
	}
}
