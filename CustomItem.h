#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H
#include "IceCreamItem.h"
#include <map>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class CustomItem: public IceCreamItem{
public:
	virtual ~CustomItem();
	void addTopping(std::string topping);
	CustomItem(std::string size);
	virtual std::string composeItem();
	virtual double getPrice();
protected:
	std::map<std::string, int> toppings;
};

#endif
