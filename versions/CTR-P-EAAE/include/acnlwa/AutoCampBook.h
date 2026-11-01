#ifndef ACNLWA_AUTOCAMPBOOK_H
#define ACNLWA_AUTOCAMPBOOK_H

#include "acnlwa/AddressBook.h"

class AutoCampBook : public ::AddressBook {
public:
    virtual ~AutoCampBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_AUTOCAMPBOOK_H
