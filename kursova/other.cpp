//#include <iostream>
//#include <fstream>
//#include <string.h>
//#include <locale>
//#include <list>
//#include <algorithm>
//
//using namespace std;
//
//class CEstate {
//protected:
//
//	string m_sAddress;
//	string m_sOwner;
//	int m_iPrice;
//	double m_dSize;
//
//public:
//	CEstate() {
//		m_sAddress = "Varna";
//		m_sOwner = "Ivanov";
//		m_iPrice = 50000;
//		m_dSize = 80.00;
//	}
//
//	CEstate(const string& address, const string& owner, int price, double size) {
//		m_sAddress = address;
//		m_sOwner = owner;
//		m_iPrice = price;
//		m_dSize = size;
//	}
//
//	CEstate(const CEstate& obj) {
//		m_sAddress = obj.m_sAddress;
//		m_sOwner = obj.m_sOwner;
//		m_iPrice = obj.m_iPrice;
//		m_dSize = obj.m_dSize;
//	}
//
//	string getAddress() const { return m_sAddress; }
//
//	int getPrice() const { return m_iPrice; }
//
//	double getSize() const { return m_dSize; }
//
//	void setPrice(const int& cena) { m_iPrice = cena; }
//
//	void setAddres(const string& cena) { m_sAddress = cena; }
//
//	void setOwner(const string& cena) { m_sOwner = cena; }
//
//	void setSize(const double& cena) { m_dSize = cena; }
//
//	virtual void printEstate() = 0;
//};
//
//class Flat : public CEstate {
//
//private:
//	int m_iRoom;
//	int m_iFlor;
//
//public:
//	Flat() {}
//	Flat(const int& room, const int& floor)
//	{
//		m_iRoom = room;
//		m_iFlor = floor;
//	}
//	void setRoom(const int& room)
//	{
//		m_iRoom = room;
//	}
//	void setFloor(const int& room)
//	{
//		m_iFlor = room;
//	}
//	void printEstate() {
//		cout << "Address: " << m_sAddress << endl
//			<< "Owner: " << m_sOwner << endl
//			<< "Price: " << m_iPrice << endl
//			<< "Size: " << m_dSize << endl
//			<< "Room: " << m_iRoom << endl
//			<< "Flor: " << m_iFlor << endl
//			<< endl;
//	}
//};
//
//class House : public CEstate {
//private:
//	int m_iRoom;
//	int m_iFlor;
//	double m_dYardSize;
//
//
//public:
//
//	House() {}
//	House(const double& yardSize) {
//
//		m_dYardSize = yardSize;
//	}
//
//	void setSize(const double& yardSize)
//	{
//		m_dYardSize = yardSize;
//	}
//
//	void setRoom(const double& room)
//	{
//		m_iRoom = room;
//	}
//	void setFloor(const double& floor)
//	{
//		m_iFlor = floor;
//	}
//
//	void printEstate() {
//		cout << "Address: " << m_sAddress << endl
//			<< "Owner: " << m_sOwner << endl
//			<< "Price: " << m_iPrice << endl
//			<< "Size: " << m_dSize << endl
//			<< "Room: " << m_iRoom << endl
//			<< "Flor: " << m_iFlor << endl
//			<< "YardSize: " << m_dYardSize << endl
//			<< endl;
//	}
//};
//
//enum Comunication { water, electricity, phone, road, sewage }; //izbroqvane na tip komunikacii
//
//class CPlot : public CEstate {
//private:
//	list <Comunication> m_lComunication;
//	double m_dYardSize;
//
//public:
//	void printEstate() {
//		cout << "Address: " << m_sAddress << endl
//			<< "Owner: " << m_sOwner << endl
//			<< "Price: " << m_iPrice << endl
//			<< "Size: " << m_dSize << endl
//			<< "YardSize: " << m_dYardSize << endl
//			<< "Communication: ";
//
//		for (Comunication c : m_lComunication) {
//			cout << c << "  ";
//		}
//		cout << endl;
//
//	}
//	list <Comunication> getComunication() { return m_lComunication; }
//
//};
//
//class RealEstate {
//
//public:
//	list<CEstate*> m_lEstates;
//
//	void registerEstate(CEstate* obj) {
//		m_lEstates.push_back(obj);
//		cout << "Registered: ";
//		obj->printEstate();
//
//	}
//
//	void deleteEstate(CEstate* obj) {
//		m_lEstates.remove(obj);
//
//	}
//
//	list<CEstate*> getEstates() {
//		return m_lEstates;
//	}
//
//	void printEstates() {
//		for (CEstate* est : m_lEstates)
//			est->printEstate();
//	}
//};
//
//class Broker {
//protected:
//	RealEstate m_oEstates;
//	string m_sName;
//	double m_dPercent;
//public:
//
//	Broker() {}
//	Broker(const string& name, const double& percent)
//	{
//		m_sName = name;
//		m_dPercent = percent;
//	}
//	void setEstates(RealEstate estate) { m_oEstates = estate; }
//	RealEstate getEstates() { return m_oEstates; }
//	RealEstate* getByName(const string& name) {
//		RealEstate* result = new RealEstate();
//
//		list<CEstate*> estates = m_oEstates.getEstates();
//		for (CEstate* est : estates) {
//			if (est->getAddress() == name)
//				result->registerEstate(est);
//		}
//		return result;
//
//	}
//
//	RealEstate* getByPrice(const int& price) {
//		RealEstate* result = new RealEstate();
//
//		list<CEstate*> estates = m_oEstates.getEstates();
//		for (CEstate* est : estates) {
//			if (est->getPrice() == price)
//				result->registerEstate(est);
//		}
//		return result;
//
//	}
//
//	RealEstate* getBySize(const int& size) {
//		RealEstate* result = new RealEstate();
//
//		list<CEstate*> estates = m_oEstates.getEstates();
//		for (CEstate* est : estates) {
//			if (est->getSize() == size)
//				result->registerEstate(est);
//		}
//		return result;
//
//	}
//	virtual void addVIP(CEstate* obj) = 0;
//	virtual void showVIPs() = 0;
//};
//
//
//void submenu(Broker* broker);
//
//class HelpfulBroker : public Broker {
//private:
//	RealEstate m_oVIP;
//
//public:
//
//	void addVIP(CEstate* obj) {
//		m_oVIP.registerEstate(obj);
//	}
//
//	void deleteVIP(CEstate* obj) {
//		m_oVIP.deleteEstate(obj);
//	}
//
//	void showVIPs() {
//		cout << "VIP Estates >>>>\n";
//		m_oVIP.printEstates();
//	}
//
//};
//
//class DishonestBroker : public Broker {
//private:
//	RealEstate m_oVIP;
//
//public:
//
//	void addVIP(CEstate* obj) {
//		obj->setPrice(floor(obj->getPrice() * 1.25)); //the dishonest broker pumps up the price with 25%
//		m_oVIP.registerEstate(obj);
//	}
//	void deleteVIP(CEstate* obj) {
//		m_oVIP.deleteEstate(obj);
//
//	}
//
//
//	void showVIPs() {
//		cout << "VIP Estates >>>>\n";
//		m_oVIP.printEstates();
//	}
//
//};
//
//
//class SimpleBroker : public Broker {
//	void addVIP(CEstate* obj) {
//		cout << "The simple broker doesn't support VIP Estates!";
//		system("pause");
//	}
//
//	void showVIPs() {
//		cout << "The simple broker doesn't support VIP Estates!";
//		system("pause");
//	}
//
//};
//
//void submenu(Broker* broker) {
//	int choice = 0;
//	cout << endl << endl;
//	while (choice != 4)
//	{
//
//		cout << "\t\t                    +                                            +" << endl;
//		cout << "\t\t                    +             [1]. Show VIPs                 +" << endl;
//		cout << "\t\t                    +             [2]. Search by price           +" << endl;
//		cout << "\t\t                    +             [3]. Search by size            +" << endl;
//		cout << "\t\t                    +             [4]. Go back                   +" << endl;
//		cout << "\t\t                    ++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//		cout << "\n\t\t                    Enter your choose: "; cin >> choice;
//
//		switch (choice)
//		{
//		case 1: {
//			broker->showVIPs(); } break;
//		case 2: {
//			cout << "Enter price: "; int price;
//			cin >> price;
//			broker->getByPrice(price); } break;
//		case 3: {
//			cout << "Enter size: "; int size;
//			cin >> size;
//			broker->getBySize(size); } break;
//		default:
//		{
//			cout << "\n\n\t\t\tError!!!";
//			cout << "\n\t\t\t Press any button!!";
//
//		}
//
//		}
//	}
//	system("pause");
//}
//
//
//int main() {
//
//	Broker* broker;
//	RealEstate* estate = new RealEstate(); //globals - all the brokers use the RealEstate catalog
//
//
//	House* house = new House(); //registering houses in the catalog
//	house->setAddres("Varna, s.Priselci");
//	house->setOwner("Vanesa Veselinova");
//	house->setPrice(50000);
//	house->setSize(100);
//	house->setFloor(1);
//	house->setRoom(3);
//
//	estate->registerEstate(house);
//
//	House* house1 = new House();
//	house1->setAddres("Varna, Troshevo");
//	house1->setOwner("Hristiyan Vitanov");
//	house1->setPrice(500000);
//	house1->setSize(100);
//	house1->setFloor(2);
//	house1->setRoom(10);
//
//	estate->registerEstate(house1);
//
//	House* house2 = new House();
//	house2->setAddres("Varna, Levski");
//	house2->setOwner("Hristiyan Vitanov");
//	house2->setPrice(110000);
//	house2->setSize(130);
//	house2->setFloor(4);
//	house2->setRoom(2);
//
//	estate->registerEstate(house2);
//
//	House* house3 = new House();
//	house3->setAddres("Varna, Levski");
//	house3->setOwner("Stefan Karaivanov");
//	house3->setPrice(80000);
//	house3->setSize(90);
//	house3->setFloor(1);
//	house3->setRoom(4);
//
//	estate->registerEstate(house3);
//
//
//	Flat* flat = new Flat();
//	flat->setPrice(45000);
//	flat->setSize(90);
//	flat->setAddres("Varna, Vladislavovo");
//	flat->setOwner("Stefan Karaivanov");
//	flat->setFloor(4);
//	flat->setRoom(2);
//
//	estate->registerEstate(flat);//registering estates in the catalog
//
//	Flat* flat1 = new Flat();
//	flat1->setPrice(90000);
//	flat1->setSize(70);
//	flat1->setAddres("Varna, Center");
//	flat1->setOwner("Stefan Karaivanov");
//	flat1->setFloor(8);
//	flat1->setRoom(2);
//
//	estate->registerEstate(flat1);
//
//	Flat* flat2 = new Flat();
//	flat2->setPrice(90000);
//	flat2->setSize(130);
//	flat2->setAddres("Varna, Levski");
//	flat2->setOwner("Vanesa Veselinova");
//	flat2->setFloor(10);
//	flat2->setRoom(4);
//
//	estate->registerEstate(flat2);
//
//	Flat* flat3 = new Flat();
//	flat3->setPrice(70000);
//	flat3->setSize(70);
//	flat3->setAddres("Varna, Briz");
//	flat3->setOwner("Hristiyan Vitanov");
//	flat3->setFloor(2);
//	flat3->setRoom(4);
//
//
//	Broker* h_broker = new HelpfulBroker();
//	Broker* d_broker = new DishonestBroker();
//	Broker* s_broker = new SimpleBroker();
//
//	h_broker->setEstates(*estate);
//	d_broker->setEstates(*estate);
//	s_broker->setEstates(*estate);
//
//	h_broker->addVIP(flat);
//	d_broker->addVIP(house);
//
//	int choice = 0;
//	cout << endl << endl;
//	while (choice != 4)
//	{
//
//		cout << "\t\t                    ++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//		cout << "\t\t                    +      Choose:						          +" << endl;
//		cout << "\t\t                    +             [1]. Helpful Broker            +" << endl;
//		cout << "\t\t                    +             [2]. Dishonest Broker          +" << endl;
//		cout << "\t\t                    +             [3]. Simple Broker             +" << endl;
//		cout << "\t\t                    +             [4]. Exit                      +" << endl;
//		cout << "\t\t                    ++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//		cout << "\n\t\t                   Enter your choose: "; cin >> choice;
//
//		switch (choice)
//		{
//		case 1: system("cls"); {
//			cout << "You chose the HONEST BROKER!";
//			submenu(h_broker);
//
//		}
//			  break;
//		case 2: system("cls"); {
//			cout << "You chose the DISHONEST BROKER!";
//			submenu(d_broker);
//
//		}
//			  break;
//		case 3: system("cls"); {
//			cout << "You chose the SIMPLE BROKER!";
//			submenu(s_broker);
//
//		}
//			  break;
//
//		case 4: system("cls"); break;
//		default:
//		{ system("cls");
//		cout << "\n\n\t\t\tError!!!";
//		cout << "\n\t\t\t Press any button!!";
//
//		}
//		}
//
//	}
//	system("pause");
//}
