#ifndef PREMADEITEM_H
#define PREMADEITEM_H
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem {
public:

    PreMadeItem(std::string name, std::string size);
    virtual ~PreMadeItem();
    std::string composeItem() override;
    double getPrice() override;
protected:

    std::string name;
};

#endif