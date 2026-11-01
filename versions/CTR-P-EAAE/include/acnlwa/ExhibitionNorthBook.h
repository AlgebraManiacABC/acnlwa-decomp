#ifndef ACNLWA_EXHIBITIONNORTHBOOK_H
#define ACNLWA_EXHIBITIONNORTHBOOK_H

#include "acnlwa/AddressBook.h"

class ExhibitionNorthBook : public ::AddressBook {
public:
    virtual ~ExhibitionNorthBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_EXHIBITIONNORTHBOOK_H
