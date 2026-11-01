#ifndef ACNLWA_SEAD_HEAPMGR_H
#define ACNLWA_SEAD_HEAPMGR_H

#include "acnlwa/sead/hostio/Node.h"

namespace sead {

class HeapMgr : public ::sead::hostio::Node {
public:
    virtual void VF00();
    virtual ~HeapMgr();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_HEAPMGR_H
