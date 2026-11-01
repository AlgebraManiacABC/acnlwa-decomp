#ifndef ACNLWA_FTRLIST_H
#define ACNLWA_FTRLIST_H

#include "acnlwa/InstSelect.h"

class FtrList : public ::InstSelect<8> {
public:
    virtual ~FtrList();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF17();
    virtual void VF19();
    virtual void VF21();
    virtual void VF24();
    virtual void VF25();
};

#endif  // ACNLWA_FTRLIST_H
