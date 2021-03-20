#include "Flat.h"

Flat::Flat(string Address, string Owner, int Price, double Size, int Room, int Floor) : Estate(Address, Owner, Price, Size) {
	room = Room;
	floor = Floor;
}

void Flat::printEstate() {
	cout << "Type: Flat" << endl
		<< "Address: " << address << endl
		<< "Owner: " << owner << endl
		<< "Price: " << price << endl
		<< "Size: " << size << endl
		<< "Room: " << room << endl
		<< "Floor: " << floor << endl
		<< endl;
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
