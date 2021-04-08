#include "Flat.h"

Flat::Flat(string Address, string Owner, int Price, double Size, int Room, int Floor) : Estate(Address, Owner, Price, Size) {
	room = Room;
	floor = Floor;
}

void Flat::printEstate(ostream& out) {
	out << setw(10) << setfill(' ') << left << "|Flat"
		<< "|" << setw(24) << setfill(' ') << left << address
		<< "|" << setw(14) << setfill(' ') << left << owner
		<< "|" << setw(9) << setfill(' ') << left << price
		<< "|" << setw(9) << setfill(' ') << left << size
		<< "|" << setw(9) << setfill(' ') << left << room
		<< "|" << setw(9) << setfill(' ') << left << floor
		<< "|" << setw(14) << setfill(' ') << left << ""
		<< "|" << setw(19) << setfill(' ') << left << ""
		<< "|" << endl;
	out << setw(126) << setfill('-') << "" << endl;
}

void Flat::setRoom(const int& Room) {
	room = Room;
}

void Flat::setFloor(const int& Floor) {
	floor = Floor;
}

const int& Flat::getRoom() const {
	return room;
}

const int& Flat::getFloor() const {
	return floor;
}

ostream& operator<<(ostream& out, Flat& f) {
	f.printEstate(out);

	return out;
}