#ifndef ACNLWA_VILLAGEBOOK_H
#define ACNLWA_VILLAGEBOOK_H

#include "acnlwa/AddressBook.h"

class VillageBook : public ::AddressBook {
public:
    virtual ~VillageBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_VILLAGEBOOK_H
