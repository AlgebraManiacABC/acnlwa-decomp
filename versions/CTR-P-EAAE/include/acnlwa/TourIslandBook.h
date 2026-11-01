#ifndef ACNLWA_TOURISLANDBOOK_H
#define ACNLWA_TOURISLANDBOOK_H

#include "acnlwa/AddressBook.h"

class TourIslandBook : public ::AddressBook {
public:
    virtual ~TourIslandBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_TOURISLANDBOOK_H
