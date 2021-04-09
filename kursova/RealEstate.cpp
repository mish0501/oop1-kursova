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

	for (auto estate : estates)
	{
		estate->printEstate(cout);
	}
}
