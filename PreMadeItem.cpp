#include "PreMadeItem.h"
#include <sstream>
#include <iomanip>

double PreMadeItem::getPrice() {
    return price;
}
PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size) {
    if (size == "small") {
        price = 4;
    }
    else if (size == "medium") {
        price = 6;
    }
    else if (size == "large") {
        price = 7.5;
    }
    else {
        price = -1;
    }
    this->name = name;
}
PreMadeItem::~PreMadeItem() {
    //Nothing to see here...
}
std::string PreMadeItem::composeItem() {
    std::stringstream out;
    out << "Pre-made Size: " << size << "\n";
    out << "Pre-made Item: " << name << "\n";
    out << std::fixed << std::setprecision(2);
    out << "Price: $" << price << "\n";
    return out.str();
}