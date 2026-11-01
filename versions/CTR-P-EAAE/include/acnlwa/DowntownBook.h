#ifndef ACNLWA_DOWNTOWNBOOK_H
#define ACNLWA_DOWNTOWNBOOK_H

#include "acnlwa/AddressBook.h"

class DowntownBook : public ::AddressBook {
public:
    virtual ~DowntownBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_DOWNTOWNBOOK_H
