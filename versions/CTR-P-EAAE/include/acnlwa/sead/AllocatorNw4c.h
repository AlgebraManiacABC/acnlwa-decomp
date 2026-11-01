#ifndef ACNLWA_SEAD_ALLOCATORNW4C_H
#define ACNLWA_SEAD_ALLOCATORNW4C_H

#include "acnlwa/nw/os/IAllocator.h"

namespace sead {

class AllocatorNw4c : public ::nw::os::IAllocator {
public:
    virtual ~AllocatorNw4c();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_ALLOCATORNW4C_H
