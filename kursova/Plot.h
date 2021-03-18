#pragma once
#include "Estate.h"
#include <list>

enum class Comunication { water, electricity, phone, road, sewage };

class Plot :
	public Estate
{
private:
	list<Comunication> comunication;
	double yardSize;

public:
	void printEstate() {
		cout << "Address: " << address << endl
			<< "Owner: " << owner << endl
			<< "Price: " << price << endl
			<< "Size: " << size << endl
			<< "YardSize: " << yardSize << endl
			<< "Comunications: " << endl;

		list<string> comunications = getComunications();

		for (auto c : comunications) {
			cout << "  " << c << endl;
		}

	}

	void setYardSize(const double& YardSize) {
		yardSize = YardSize;
	}

	const double& getYardSize() const {
		return yardSize;
	}

	void setComunications(const list<string> comunications) {
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

	const list<string>& getComunications() const {
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
};

