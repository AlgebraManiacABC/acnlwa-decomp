#ifndef ACNLWA_EXHIBITIONENTRANCEBOOK_H
#define ACNLWA_EXHIBITIONENTRANCEBOOK_H

#include "acnlwa/AddressBook.h"

class ExhibitionEntranceBook : public ::AddressBook {
public:
    virtual ~ExhibitionEntranceBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_EXHIBITIONENTRANCEBOOK_H
