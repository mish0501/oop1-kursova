#include "UI.h"

void UI::loadData() {
	House* house = new House("Varna, s.Priselci", "Vanesa Veselinova", 50000, 200.00, 1, 3, 300.00);

	estates->registerEstate(house);

	House* house1 = new House("Varna, Troshevo", "Hristiyan Vitanov", 500000, 150.50, 10, 2, 500.50);

	estates->registerEstate(house1);

	House* house2 = new House("Varna, Levski", "Hristiyan Vitanov", 110000, 130, 4, 8, 300);

	estates->registerEstate(house2);

	House* house3 = new House("Varna, Levski", "Stefan Karaivanov", 80000, 90, 3, 1, 50);

	estates->registerEstate(house3);

	Flat* flat = new Flat("Varna, Vladislavovo", "Stefan Karaivanov", 45000, 90, 5, 2);

	estates->registerEstate(flat);

	Flat* flat1 = new Flat("Varna, Center", "Stefan Karaivanov", 90000, 75.4, 3, 2);

	estates->registerEstate(flat1);

	Flat* flat2 = new Flat("Varna, Levski", "Vanesa Veselinova", 90000, 130, 4, 5);

	estates->registerEstate(flat2);

	Flat* flat3 = new Flat("Varna, Briz", "Hristiyan Vitanov", 70000, 70, 2, 4);

	HonestBroker* honestBroker = new HonestBroker("Mihail", 0.4, estates);

	honestBroker->addVIP(house);
	honestBroker->addVIP(flat);
	honestBroker->addVIP(house2);
	honestBroker->addVIP(house3);

	DishonestBroker* dishonestBroker = new DishonestBroker("Ivan", 0.2, estates);

	dishonestBroker->addVIP(house2);
	dishonestBroker->addVIP(flat2);

	SimpleBroker* simpleBroker = new SimpleBroker("Maria", 0.3, estates);

	brokers.push_back(honestBroker);
	brokers.push_back(dishonestBroker);
	brokers.push_back(simpleBroker);
}

UI::UI() {
	estates = new RealEstate();
	loadData();
}

void UI::showMainMenu() {
	int choice;
	do
	{
		cout << "++++++++++++++++++++++" << endl;
		cout << "+      Choose:      +" << endl;
		cout << "+1. Helpful Broker  +" << endl;
		cout << "+2. Dishonest Broker+" << endl;
		cout << "+3. Simple Broker   +" << endl;
		cout << "+4. Exit            +" << endl;
		cout << "++++++++++++++++++++++" << endl;
		cout << "Enter your choose: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			system("cls");
			cout << "You chose the HONEST BROKER!" << endl;
			break;
		case 2:
			system("cls");
			cout << "You chose the DISHONEST BROKER!" << endl;
			break;
		case 3:
			system("cls");
			cout << "You chose the SIMPLE BROKER!" << endl;
			break;
		case 4:
			break;
		default:
			system("cls");
			cout << "Error!!!";
			cout << "Press any button!!";
		}

	} while (choice != 4);
}
