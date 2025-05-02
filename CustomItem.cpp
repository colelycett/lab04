#include "CustomItem.h"
#include <sstream>
#include <iomanip>

CustomItem::CustomItem(std::string size) : IceCreamItem(size) {
    if (size == "small") {
        price = 3;
    }
    else if (size == "medium") {
        price = 5;
    }
    else if (size == "large") {
        price = 6.5;
    }
    else {
        price = -1;
    }
}
CustomItem::~CustomItem() {
    //Nothing yet...
}
double CustomItem::getPrice() {
    return price;
}
std::string CustomItem::composeItem() {
    std::stringstream out;
    out << "Custom Size: " << size << "\n";
    out << "Toppings:\n";
    for (auto i = toppings.begin(); i != toppings.end(); i++) {
        out << i->first << "s: " << i->second << " oz\n";
    }
    out << "Price: $";
    out << std::fixed << std::setprecision(2) << price << "\n";
    return out.str();
}
void CustomItem::addTopping(std::string topping) {

    if (toppings.find(topping) == toppings.end()) {
        toppings[topping] = 0;
    }
    toppings[topping] += 1;
    price += 0.4;

}