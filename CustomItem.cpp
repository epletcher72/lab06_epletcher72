#include "CustomItem.h"
using namespace std;
CustomItem::~CustomItem() {}
void CustomItem::addTopping(string topping) {
    if (toppings.find(topping) != toppings.end()) {
        map<string, int>::iterator i = toppings.find(topping);
        (i->second)++;
    } else {
        toppings.insert(pair<string,int>(topping,1));
    }
    price+=.4;
}
CustomItem::CustomItem(std::string size) : IceCreamItem(size) {
    if(size == "small") price = 3;
    else if(size == "medium") price = 5;
    else price = 6.5;
}
string CustomItem::composeItem() {
    string result;
    result += "Custom Size: " + size + "\n";
    result += "Toppings:\n";
    for(map<string,int>::iterator i = toppings.begin(); i!=toppings.end(); i++
       ){
result += i->first + ": " + to_string(i->second) + " oz\n";
}
stringstream stream;
stream<<fixed<<setprecision(2)<<price;
result += "Price: $" + stream.str() + "\n";
return result;
}
double CustomItem::getPrice() {
    return price;
}
