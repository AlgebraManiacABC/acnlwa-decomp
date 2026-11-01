#ifndef ACNLWA_VILLAGESPBOOK_H
#define ACNLWA_VILLAGESPBOOK_H

#include "acnlwa/AddressBook.h"

class VillageSpBook : public ::AddressBook {
public:
    virtual ~VillageSpBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_VILLAGESPBOOK_H
