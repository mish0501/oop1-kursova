#include "Plot.h"

Plot::Plot(string Address, string Owner, int Price, double Size, list<string> comunications, double YardSize) : Estate(Address, Owner, Price, Size) {
	setComunications(comunications);

	yardSize = YardSize;
}

void Plot::printEstate() {
	cout << "Type: Plot" << endl
		<< "Address: " << address << endl
		<< "Owner: " << owner << endl
		<< "Price: " << price << endl
		<< "Size: " << size << endl
		<< "Yard size: " << yardSize << endl
		<< "Comunications:" << endl;

	list<string> comunications = getComunications();

	for (auto c : comunications) {
		cout << "  " << c << endl;
	}
}

void Plot::setYardSize(const double& YardSize) {
	yardSize = YardSize;
}

const double& Plot::getYardSize() const {
	return yardSize;
}

void Plot::setComunications(const list<string> comunications) {
	for (string c : comunications) {
		if (c == "water") {
			comunication.push_back(Comunication::water);
		}
		else if (c == "electricity") {
			comunication.push_back(Comunication::electricity);
		}
		else if (c == "phone") {
			comunication.push_back(Comunication::phone);
		}
		else if (c == "road") {
			comunication.push_back(Comunication::road);
		}
		else if (c == "sewage") {
			comunication.push_back(Comunication::sewage);
		}
	}
}

const list<string>& Plot::getComunications() const {
	list<string> comunications;
	for (Comunication c : comunication) {
		switch (c) {
		case Comunication::water:
			comunications.push_back("water");
			break;
		case Comunication::electricity:
			comunications.push_back("electricity");
			break;
		case Comunication::phone:
			comunications.push_back("phone");
			break;
		case Comunication::road:
			comunications.push_back("road");
			break;
		case Comunication::sewage:
			comunications.push_back("sewage");
			break;
		}
	}

	return comunications;
}
