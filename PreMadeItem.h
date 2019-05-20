#ifndef PREMADEITEM_H
#define PREMADEITEM_H
#include "IceCreamItem.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
class PreMadeItem : public IceCreamItem{
public:
    virtual ~PreMadeItem();
    PreMadeItem(std::string name,std::string size);
    virtual std::string composeItem();
    virtual double getPrice();
private:
    std::string name;
};
#endif
