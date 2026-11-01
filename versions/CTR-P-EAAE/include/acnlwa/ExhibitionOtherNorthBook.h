#ifndef ACNLWA_EXHIBITIONOTHERNORTHBOOK_H
#define ACNLWA_EXHIBITIONOTHERNORTHBOOK_H

#include "acnlwa/AddressBook.h"

class ExhibitionOtherNorthBook : public ::AddressBook {
public:
    virtual ~ExhibitionOtherNorthBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_EXHIBITIONOTHERNORTHBOOK_H
