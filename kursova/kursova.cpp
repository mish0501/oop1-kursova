#include "kursova.h"

#include "RealEstate.h"

#include "House.h"

using namespace std;

int main() {
	RealEstate* estate = new RealEstate();

	House* house = new House("Varna, s.Priselci", "Vanesa Veselinova", 50000, 200.00, 1, 3, 300.00);

	estate->registerEstate(house);

	House* house1 = new House("Varna, Troshevo", "Hristiyan Vitanov", 500000, 150.50, 10, 2, 500.50);

	estate->registerEstate(house1);

	House* house2 = new House("Varna, Levski", "Hristiyan Vitanov", 110000, 130, 4, 8, 300);

	estate->registerEstate(house2);

	House* house3 = new House("Varna, Levski","Stefan Karaivanov", 80000, 90, 3, 1, 50);

	estate->registerEstate(house3);

	Flat* flat = new Flat("Varna, Vladislavovo", "Stefan Karaivanov", 45000, 90, 5, 2);

	estate->registerEstate(flat);

	Flat* flat1 = new Flat("Varna, Center", "Stefan Karaivanov", 90000, 75.4, 3, 2);

	estate->registerEstate(flat1);

	Flat* flat2 = new Flat("Varna, Levski", "Vanesa Veselinova", 90000, 130, 4, 5);

	estate->registerEstate(flat2);

	Flat* flat3 = new Flat("Varna, Briz", "Hristiyan Vitanov", 70000, 70, 2, 4);

	estate->printEstates();

	return 0;
}