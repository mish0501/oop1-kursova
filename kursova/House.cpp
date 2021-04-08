#include "House.h"

House::House(string Address, string Owner, int Price, double Size, int Room, int Floor, double YardSize) : Flat(Address, Owner, Price, Size, Room, Floor) {
	yardSize = YardSize;
}

void House::printEstate(ostream& out) {
	out << setw(10) << setfill(' ') << left << "|House"
		<< "|" << setw(24) << setfill(' ') << left << address
		<< "|" << setw(14) << setfill(' ') << left << owner
		<< "|" << setw(9) << setfill(' ') << left << price
		<< "|" << setw(9) << setfill(' ') << left << size
		<< "|" << setw(9) << setfill(' ') << left << room
		<< "|" << setw(9) << setfill(' ') << left << floor
		<< "|" << setw(14) << setfill(' ') << left << yardSize
		<< "|" << setw(19) << setfill(' ') << left << ""
		<< "|" << endl;
	out << setw(126) << setfill('-') << "" << endl;
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
