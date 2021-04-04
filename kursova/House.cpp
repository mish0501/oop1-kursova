#include "House.h"

House::House(string Address, string Owner, int Price, double Size, int Room, int Floor, double YardSize) : Flat(Address, Owner, Price, Size, Room, Floor) {
	yardSize = YardSize;
}

void House::printEstate(ostream& out) {
	out << "Type:             House" << endl
		<< "Address:          " << address << endl
		<< "Owner:            " << owner << endl
		<< "Price:            " << price << endl
		<< "Size:             " << size << endl
		<< "Room:             " << room << endl
		<< "Floor:            " << floor << endl
		<< "Yard size:        " << yardSize << endl
		<< endl;
}

void House::setYardSize(const double& YardSize) {
	yardSize = YardSize;
}

const double& House::getYardSize() const {
	return yardSize;
}

ostream& operator<<(ostream& out, House& h) {
	h.printEstate(out);

	return out;
}
