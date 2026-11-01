#ifndef ACNLWA_CABINET_H
#define ACNLWA_CABINET_H

#include "acnlwa/ChangeListBase.h"

class Cabinet : public ::ChangeListBase {
public:
    virtual ~Cabinet();
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
    virtual void VF11() = 0;
    virtual void VF12() = 0;
    virtual void VF13() = 0;
    virtual void VF14() = 0;
    virtual void VF15() = 0;
    virtual void VF16() = 0;
};

#endif  // ACNLWA_CABINET_H
