#pragma once
#include "kursova.h"
#include "RealEstate.h"
#include "Broker.h"
#include "House.h"
#include "HonestBroker.h"
#include "DishonestBroker.h"
#include "SimpleBroker.h"

class UI
{
private:
	RealEstate* estates;
	vector<Broker*> brokers;

	void loadData();

public:
	UI();

	void showMainMenu();

	void showSearchMenu(Broker* broker);
};

