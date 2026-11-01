#ifndef ACNLWA_EXHIBITIONOTHERWESTBOOK_H
#define ACNLWA_EXHIBITIONOTHERWESTBOOK_H

#include "acnlwa/AddressBook.h"

class ExhibitionOtherWestBook : public ::AddressBook {
public:
    virtual ~ExhibitionOtherWestBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_EXHIBITIONOTHERWESTBOOK_H
