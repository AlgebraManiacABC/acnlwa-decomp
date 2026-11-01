#ifndef ACNLWA_BANKTABLEBASE_H
#define ACNLWA_BANKTABLEBASE_H

#include "acnlwa/BankTablePrivate.h"

class BankTableBase : private ::BankTablePrivate {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

#endif  // ACNLWA_BANKTABLEBASE_H
