#ifndef ACNLWA_EVENTBOOK_H
#define ACNLWA_EVENTBOOK_H

#include "acnlwa/AddressBook.h"

class EventBook : public ::AddressBook {
public:
    virtual ~EventBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_EVENTBOOK_H
