#ifndef ACNLWA_EXHIBITIONEASTBOOK_H
#define ACNLWA_EXHIBITIONEASTBOOK_H

#include "acnlwa/AddressBook.h"

class ExhibitionEastBook : public ::AddressBook {
public:
    virtual ~ExhibitionEastBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_EXHIBITIONEASTBOOK_H
