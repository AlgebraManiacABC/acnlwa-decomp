#ifndef ACNLWA_CHANGERENTALBASE_H
#define ACNLWA_CHANGERENTALBASE_H

#include "acnlwa/state/Mode.h"

class ChangeRentalBase : public ::state::Mode< ::ChangeRentalBase> {
public:
    virtual ~ChangeRentalBase();
    virtual void Mode_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

#endif  // ACNLWA_CHANGERENTALBASE_H
