#ifndef ACNLWA_PWORKDELETELIST_H
#define ACNLWA_PWORKDELETELIST_H

#include "acnlwa/PWorkList.h"

class PWorkDeleteList : public ::PWorkList {
public:
    virtual ~PWorkDeleteList();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF08();
    virtual void VF10();
    virtual void VF11();
    virtual void VF13();
    virtual void VF15();
    virtual void VF16();
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF24();
};

#endif  // ACNLWA_PWORKDELETELIST_H
