#include "Plot.h"

Plot::Plot(string Address, string Owner, int Price, double Size, list<string> comunications, double YardSize) : Estate(Address, Owner, Price, Size) {
	setComunications(comunications);

	yardSize = YardSize;
}

void Plot::printEstate(ostream& out) {
	out << setw(10) << setfill(' ') << left << "|Plot"
		<< "|" << setw(24) << setfill(' ') << left << address
		<< "|" << setw(14) << setfill(' ') << left << owner
		<< "|" << setw(9) << setfill(' ') << left << price
		<< "|" << setw(9) << setfill(' ') << left << size
		<< "|" << setw(9) << setfill(' ') << left << ""
		<< "|" << setw(9) << setfill(' ') << left << ""
		<< "|" << setw(14) << setfill(' ') << left << yardSize
		<< "|" << setw(19) << setfill(' ') << left;

	list<string> comunications = getComunications();

	for (auto c : comunications) {
		cout << "  " << c << endl;
	}

	out << "|" << endl;
	out << setw(126) << setfill('-') << "" << endl;
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

ostream& operator<<(ostream& out, Plot& p) {
	p.printEstate(out);

	return out;
}