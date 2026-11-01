#ifndef ACNLWA_EXHIBITIONOTHEREASTBOOK_H
#define ACNLWA_EXHIBITIONOTHEREASTBOOK_H

#include "acnlwa/AddressBook.h"

class ExhibitionOtherEastBook : public ::AddressBook {
public:
    virtual ~ExhibitionOtherEastBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_EXHIBITIONOTHEREASTBOOK_H
