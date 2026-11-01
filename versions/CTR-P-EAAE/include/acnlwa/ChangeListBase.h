#ifndef ACNLWA_CHANGELISTBASE_H
#define ACNLWA_CHANGELISTBASE_H

#include "acnlwa/ChangeRentalBase.h"
#include "acnlwa/state/Mode.h"

class ChangeListBase : public ::ChangeRentalBase, public ::state::Mode< ::ChangeListBase> {
public:
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_CHANGELISTBASE_H
