#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H
#include "IceCreamItem.h"
#include <map>

class CustomItem : public IceCreamItem {
public:
    CustomItem(std::string size);
    virtual ~CustomItem();
    std::string composeItem() override;
    double getPrice() override;
    void addTopping(std::string topping);

protected:
    std::map<std::string, int> toppings;
    
};

#endif