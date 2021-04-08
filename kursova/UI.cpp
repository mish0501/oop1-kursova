#include "UI.h"

void UI::loadData() {
	House* house = new House("Varna, Center", "Pavel", 50000, 200.00, 1, 3, 300.00);

	estates->registerEstate(house);

	House* house1 = new House("Varna, Troshevo", "Pavel", 500000, 150.50, 10, 2, 500.50);

	estates->registerEstate(house1);

	House* house2 = new House("Varna, Levski", "Hristiyan", 110000, 130, 4, 8, 300);

	estates->registerEstate(house2);

	House* house3 = new House("Varna, Levski", "Kameliya", 80000, 90, 3, 1, 50);

	estates->registerEstate(house3);

	Flat* flat = new Flat("Varna, Vladislavovo", "Kameliya", 45000, 90, 5, 2);

	estates->registerEstate(flat);

	Flat* flat1 = new Flat("Varna, Center", "Pavel", 90000, 75.4, 3, 2);

	estates->registerEstate(flat1);

	Flat* flat2 = new Flat("Varna, Levski", "Hristiyan", 90000, 130, 4, 5);

	estates->registerEstate(flat2);

	Flat* flat3 = new Flat("Varna, Briz", "Hristiyan", 70000, 70, 2, 4);

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
		cout << "+++++++++++++++++++++" << endl;
		cout << "+      Choose:      +" << endl;
		cout << "+1. Helpful Broker  +" << endl;
		cout << "+2. Dishonest Broker+" << endl;
		cout << "+3. Simple Broker   +" << endl;
		cout << "+4. Exit            +" << endl;
		cout << "+++++++++++++++++++++" << endl;
		cout << "Enter your choice: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			system("cls");
			cout << "You chose the HONEST BROKER!" << endl;
			showSearchMenu(brokers[0]);
			break;
		case 2:
			system("cls");
			cout << "You chose the DISHONEST BROKER!" << endl;
			showSearchMenu(brokers[1]);
			break;
		case 3:
			system("cls");
			cout << "You chose the SIMPLE BROKER!" << endl;
			showSearchMenu(brokers[2]);
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

inline void UI::showSearchMenu(Broker* broker) {
	int choice;
	string address = "";
	string owner = "";
	int minPrice = 0;
	int maxPrice = 0;
	double size = 0;
	int room = 0;
	int floor = 0;
	double yardSize = 0;
	string estateType = "";
	list<string> comunications;
	bool running = true;

	do
	{
		cout << "Input search criterias" << endl;
		cout << "-------------------------" << endl;
		cout << "1. Address" << (address != "" ? " (" + address + ")" : "") << endl;
		cout << "2. Owner" << (owner != "" ? " (" + owner + ")" : "") << endl;
		cout << "3. Min price" << (minPrice != 0 ? " (" + to_string(minPrice) + ")" : "") << endl;
		cout << "4. Max price" << (maxPrice != 0 ? " (" + to_string(maxPrice) + ")" : "") << endl;
		cout << "5. Size" << (size != 0 ? " (" + to_string(size) + ")" : "") << endl;
		cout << "6. Rooms" << (room != 0 ? " (" + to_string(room) + ")" : "") << endl;
		cout << "7. Floor" << (floor != 0 ? " (" + to_string(floor) + ")" : "") << endl;
		cout << "8. Yard Size" << (yardSize != 0 ? " (" + to_string(yardSize) + ")" : "") << endl;
		cout << "9. Comunications";

		if (comunications != list<string>()) {
			list<string>::iterator final_iter = comunications.end();
			--final_iter;

			cout << "(";
			for (list<string>::iterator c = comunications.begin(); c != comunications.end(); ++c) {
				cout << *c;
				if (c != final_iter) {
					cout << ", ";
				}
			}
			cout << ")" << endl;
		}
		else {
			cout << endl;
		}

		cout << "10. Estate type" << (estateType != "" ? " (" + estateType + ")" : "") << endl;
		cout << "-------------------------" << endl;
		cout << "11. Search" << endl;
		cout << "12. Exit" << endl;
		cout << "Enter your choice: ";

		cin >> choice;
		switch (choice)
		{
		case 1: {
			string city, district;
			cout << endl << "Enter city: ";
			cin >> city;
			cout << "Enter district: ";
			cin >> district;

			address = city + ", " + district;
			system("cls");
		}
			  break;
		case 2:
			cout << endl << "Enter owner name: ";
			cin >> owner;
			system("cls");
			break;
		case 3:
			cout << endl << "Enter price: ";
			cin >> minPrice;
			system("cls");
			break;
		case 4:
			cout << endl << "Enter price: ";
			cin >> minPrice;
			system("cls");
			break;
		case 5:
			cout << endl << "Enter size: ";
			cin >> size;
			system("cls");
			break;
		case 6:
			cout << endl << "Enter rooms count: ";
			cin >> room;
			system("cls");
			break;
		case 7:
			cout << endl << "Enter floor: ";
			cin >> floor;
			system("cls");
			break;
		case 8:
			cout << endl << "Enter yard size: ";
			cin >> yardSize;
			system("cls");
			break;
		case 9: {
			string comunication;
			char isContinue;
			do {
				cout << endl << "Enter comunication: ";
				cin >> comunication;
				comunications.push_back(comunication);
				cout << "Do you want to continue(y or n)? ";
				cin >> isContinue;
			} while (isContinue == 'y');
			system("cls");
		}
			  break;
		case 10:
			cout << endl << "Enter estate type: ";
			cin >> estateType;
			system("cls");
			break;
		case 11:
			system("cls");
			cout << endl << "Results:" << endl 
				<< "-------------------------" << endl;
			broker->search(address, owner, minPrice, maxPrice, size, room, floor, yardSize, comunications, estateType);
			break;
		case 12:
			running = false;
			system("cls");
			break;
		default:
			system("cls");
			cout << "Error!!!";
			cout << "Try again!!" << endl;
			running = false;
			break;

		}
	} while (choice != 12 && running);
}
