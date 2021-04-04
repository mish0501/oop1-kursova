#include "RealEstate.h"

void RealEstate::registerEstate(Estate* estate) {
	estates.push_back(estate);
}

void RealEstate::deleteEstate(Estate* estate) {
	estates.remove(estate);
}

list<Estate*> RealEstate::getEstates() {
	return estates;
}

void RealEstate::printEstates() {
	for (auto estate : estates)
	{
		estate->printEstate(cout);
	}
}
