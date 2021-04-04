#pragma once
#include "Estate.h"

class Flat :
	public Estate
{
protected:
	int room;
	int floor;

public:
	Flat(string Address, string Owner, int Price, double Size, int Room, int Floor);
	void printEstate(ostream& out);
	void setRoom(const int& Room);
	void setFloor(const int& Floor);
	const int& getRoom() const;
	const int& getFloor() const;

	friend ostream& operator<<(ostream& out, Flat& f);
};