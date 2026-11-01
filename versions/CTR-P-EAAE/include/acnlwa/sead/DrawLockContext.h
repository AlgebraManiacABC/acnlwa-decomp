#ifndef ACNLWA_SEAD_DRAWLOCKCONTEXT_H
#define ACNLWA_SEAD_DRAWLOCKCONTEXT_H

#include "acnlwa/sead/hostio/Node.h"

namespace sead {

class DrawLockContext : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_DRAWLOCKCONTEXT_H
