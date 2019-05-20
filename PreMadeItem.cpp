#include "PreMadeItem.h"
using namespace std;
PreMadeItem::~PreMadeItem() {}
PreMadeItem::PreMadeItem(string size, string name):IceCreamItem(size) {
    name = name;
    if (size == "small") price = 4;
    else if (size == "medium") price = 6;
    else price = 7.5;

}
string PreMadeItem::composeItem(){
    string result;
    result += "Pre-made Size: " + size + "\n";
    result += "Pre-made Item: " + name + "\n";
    stringstream stream;
    stream<<fixed<<setprecision(2)<<price;
    result += "Price: $" + stream.str() + "\n";
    return result;
}
double PreMadeItem::getPrice() {
    return price;
}
