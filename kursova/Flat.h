#pragma once
#include "Estate.h"
class Flat :
	public Estate
{
protected:
	int room;
	int floor;

public:
	void printEstate() {
		cout << "Address: " << address << endl
			<< "Owner: " << owner << endl
			<< "Price: " << price << endl
			<< "Size: " << size << endl
			<< "Room: " << room << endl
			<< "Flor: " << floor << endl
			<< endl;
	}

	void setRoom(const int& Room) {
		room = Room;
	}
	void setFloor(const int& Floor) {
		floor = Floor;
	}

	const int& getRoom() const {
		return room;
	}
	const int& getFloor() const {
		return floor;
	}

};