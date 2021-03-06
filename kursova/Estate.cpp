#include "Estate.h"

Estate::Estate() {
	address = "Shumen";
	owner = "Mihail";
	price = 50000;
	size = 80.00;
}

Estate::Estate(string Address, string Owner, int Price, double Size) {
	address = Address;
	owner = Owner;
	price = Price;
	size = Size;
}

inline Estate::Estate(const Estate& other) {
	address = other.address;
	owner = other.owner;
	price = other.price;
	size = other.size;
}

const string& Estate::getAddress() const {
	return address;
}

const int& Estate::getPrice() const {
	return price;
}

const double& Estate::getSize() const {
	return size;
}

const string& Estate::getOwner() const {
	return owner;
}

void Estate::setPrice(const int& Price) {
	price = Price;
}

void Estate::setAddress(const string& Address) {
	address = Address;
}

void Estate::setOwner(const string& Owner) {
	owner = Owner;
}

void Estate::setSize(const double& Size) {
	size = size;
}

const int& Estate::getRoom() const {
	return 0;
}

const int& Estate::getFloor() const {
	return 0;
}

const double& Estate::getYardSize() const {
	return 0;
}

const list<string>& Estate::getComunications() const {
	return list<string>();
}

bool Estate::operator<(Estate& e) {
	return price < e.price;
}

ostream& operator<<(ostream& out, Estate& e) {
	e.printEstate(out);

	return out;
}